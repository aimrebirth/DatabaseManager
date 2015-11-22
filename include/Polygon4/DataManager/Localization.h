#pragma once

#include <unordered_map>
#include <vector>

#include "Common.h"
#include "Enums.h"
#include "String.h"

#include "Schema/Types.h"

namespace polygon4
{

enum class LocalizationType : EnumType
{
    min         =   0,

    ru          =   0,
    en,

    max,
};

extern LocalizationType gCurrentLocalizationId;

class LocalizedString
{
public:
    using string_type = String;
    using iterator = string_type*;
    using const_iterator = const string_type*;

public:
    LocalizedString()
    {
    }
    LocalizedString(const std::initializer_list<string_type> &list)
    {
        auto max = size();
        if (list.size() < max)
            max = list.size();
        auto i1 = begin();
        auto i2 = list.begin();
        for (size_t i = 0; i < max; i++)
            *i1++ = *i2++;
    }

    size_t size() const
    {
        return end() - begin();
    }

    iterator begin()
    {
        return &__Begin + 1;
    }
    iterator end()
    {
        return &__End;
    }

    const_iterator begin() const
    {
        return &__Begin + 1;
    }
    const_iterator end() const
    {
        return &__End;
    }

    string_type &operator[](LocalizationType type)
    {
        return *(begin() + static_cast<int>(type));
    }
    const string_type &operator[](LocalizationType type) const
    {
        return *(begin() + static_cast<int>(type));
    }

    operator string_type() const
    {
        return str();
    }
    string_type str(LocalizationType type = gCurrentLocalizationId) const
    {
        auto &s = (*this)[type];
        if (!s.empty())
            return s;
        return firstNonEmpty();
    }

    string_type firstNonEmpty() const
    {
        for (auto &s : *this)
            if (!s.empty())
                return s;
        return string_type();
    }

private:
    string_type __Begin;
public:
    string_type ru;
    string_type en;
private:
    string_type __End;
};

struct LocalizationInfo
{
    std::string key;
    LocalizedString data;

    String str() const
    {
        String s = data;
        if (!s.empty())
            return s;
        return key;
    }
    operator String() const
    {
        return str();
    }
};

template <typename T>
using LocalizationTable = std::unordered_map<T, LocalizationInfo>;

class Translator
{
public:
    using key_type = std::string;
    using value_type = LocalizedString;
    using dictionary_type = std::unordered_map<key_type, value_type>;
    using context_type = key_type;
    using translator_type = std::unordered_map<context_type, dictionary_type>;

public:
    String tr(const key_type &key, const context_type &context = context_type())
    {
        auto c = translator.find(context);
        if (c == translator.end())
        {
            translator[context];
            c = translator.find(context);
        }
        auto s = c->second.find(key);
        if (s == c->second.end())
        {
            c->second[key] = { key.c_str() };
            s = c->second.find(key);
        }
        return s->second.str();
    }

    void set(const translator_type &t)
    {
        translator = t;
    }

    void add(const key_type &key, const LocalizedString &ls)
    {
        translator[""][key] = ls;
    }
    void add(const key_type &key, const context_type &context, const LocalizedString &ls)
    {
        translator[context][key] = ls;
    }
    void add(const context_type &context, const dictionary_type &d)
    {
        translator[context].insert(d.begin(), d.end());
    }

private:
    translator_type translator;
};

extern Translator translator;

void initTranslator();

String tr(DataType type);
String tr(const std::string &key, const std::string &context = std::string());

}
