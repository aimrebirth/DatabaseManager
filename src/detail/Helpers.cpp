/* DO NOT EDIT! This is an autogenerated file. */

EObjectType getTableType(const std::string &table)
{
    static std::map<std::string, EObjectType> types =
    {
        { "Buildings", EObjectType::Building },
        { "ClanMechanoids", EObjectType::ClanMechanoid },
        { "ClanReputations", EObjectType::ClanReputation },
        { "Clans", EObjectType::Clan },
        { "ConfigurationEquipments", EObjectType::ConfigurationEquipment },
        { "ConfigurationGoods", EObjectType::ConfigurationGood },
        { "ConfigurationProjectiles", EObjectType::ConfigurationProjectile },
        { "ConfigurationWeapons", EObjectType::ConfigurationWeapon },
        { "Configurations", EObjectType::Configuration },
        { "Equipments", EObjectType::Equipment },
        { "Gliders", EObjectType::Glider },
        { "Goods", EObjectType::Good },
        { "GroupMechanoids", EObjectType::GroupMechanoid },
        { "Groups", EObjectType::Group },
        { "MapBuildingEquipments", EObjectType::MapBuildingEquipment },
        { "MapBuildingGliders", EObjectType::MapBuildingGlider },
        { "MapBuildingGoods", EObjectType::MapBuildingGood },
        { "MapBuildingModificators", EObjectType::MapBuildingModificator },
        { "MapBuildingProjectiles", EObjectType::MapBuildingProjectile },
        { "MapBuildingWeapons", EObjectType::MapBuildingWeapon },
        { "MapBuildings", EObjectType::MapBuilding },
        { "MapObjects", EObjectType::MapObject },
        { "Maps", EObjectType::Map },
        { "MechanoidQuests", EObjectType::MechanoidQuest },
        { "Mechanoids", EObjectType::Mechanoid },
        { "ModificationClans", EObjectType::ModificationClan },
        { "ModificationMaps", EObjectType::ModificationMap },
        { "ModificationMechanoids", EObjectType::ModificationMechanoid },
        { "Modifications", EObjectType::Modification },
        { "Modificators", EObjectType::Modificator },
        { "Objects", EObjectType::Object },
        { "Players", EObjectType::Player },
        { "Projectiles", EObjectType::Projectile },
        { "QuestRewardEquipments", EObjectType::QuestRewardEquipment },
        { "QuestRewardGliders", EObjectType::QuestRewardGlider },
        { "QuestRewardGoods", EObjectType::QuestRewardGood },
        { "QuestRewardModificators", EObjectType::QuestRewardModificator },
        { "QuestRewardProjectiles", EObjectType::QuestRewardProjectile },
        { "QuestRewardReputations", EObjectType::QuestRewardReputation },
        { "QuestRewardWeapons", EObjectType::QuestRewardWeapon },
        { "QuestRewards", EObjectType::QuestReward },
        { "Quests", EObjectType::Quest },
        { "ScriptVariables", EObjectType::ScriptVariable },
        { "Settings", EObjectType::Setting },
        { "Strings", EObjectType::String },
        { "Weapons", EObjectType::Weapon },
    };
    return types[table];
};

std::string getTableNameByType(EObjectType type)
{
    static std::map<EObjectType, std::string> tables =
    {
        { EObjectType::Building, "Buildings" },
        { EObjectType::ClanMechanoid, "ClanMechanoids" },
        { EObjectType::ClanReputation, "ClanReputations" },
        { EObjectType::Clan, "Clans" },
        { EObjectType::ConfigurationEquipment, "ConfigurationEquipments" },
        { EObjectType::ConfigurationGood, "ConfigurationGoods" },
        { EObjectType::ConfigurationProjectile, "ConfigurationProjectiles" },
        { EObjectType::ConfigurationWeapon, "ConfigurationWeapons" },
        { EObjectType::Configuration, "Configurations" },
        { EObjectType::Equipment, "Equipments" },
        { EObjectType::Glider, "Gliders" },
        { EObjectType::Good, "Goods" },
        { EObjectType::GroupMechanoid, "GroupMechanoids" },
        { EObjectType::Group, "Groups" },
        { EObjectType::MapBuildingEquipment, "MapBuildingEquipments" },
        { EObjectType::MapBuildingGlider, "MapBuildingGliders" },
        { EObjectType::MapBuildingGood, "MapBuildingGoods" },
        { EObjectType::MapBuildingModificator, "MapBuildingModificators" },
        { EObjectType::MapBuildingProjectile, "MapBuildingProjectiles" },
        { EObjectType::MapBuildingWeapon, "MapBuildingWeapons" },
        { EObjectType::MapBuilding, "MapBuildings" },
        { EObjectType::MapObject, "MapObjects" },
        { EObjectType::Map, "Maps" },
        { EObjectType::MechanoidQuest, "MechanoidQuests" },
        { EObjectType::Mechanoid, "Mechanoids" },
        { EObjectType::ModificationClan, "ModificationClans" },
        { EObjectType::ModificationMap, "ModificationMaps" },
        { EObjectType::ModificationMechanoid, "ModificationMechanoids" },
        { EObjectType::Modification, "Modifications" },
        { EObjectType::Modificator, "Modificators" },
        { EObjectType::Object, "Objects" },
        { EObjectType::Player, "Players" },
        { EObjectType::Projectile, "Projectiles" },
        { EObjectType::QuestRewardEquipment, "QuestRewardEquipments" },
        { EObjectType::QuestRewardGlider, "QuestRewardGliders" },
        { EObjectType::QuestRewardGood, "QuestRewardGoods" },
        { EObjectType::QuestRewardModificator, "QuestRewardModificators" },
        { EObjectType::QuestRewardProjectile, "QuestRewardProjectiles" },
        { EObjectType::QuestRewardReputation, "QuestRewardReputations" },
        { EObjectType::QuestRewardWeapon, "QuestRewardWeapons" },
        { EObjectType::QuestReward, "QuestRewards" },
        { EObjectType::Quest, "Quests" },
        { EObjectType::ScriptVariable, "ScriptVariables" },
        { EObjectType::Setting, "Settings" },
        { EObjectType::String, "Strings" },
        { EObjectType::Weapon, "Weapons" },
    };
    return tables[type];
};

#ifdef USE_QT
typedef std::map<std::string, QString> FieldNames;

FieldNames fieldNames;

void retranslateFieldNames()
{
    FieldNames names =
    {
        { "armor", QCoreApplication::translate("DB", "armor") },
        { "author", QCoreApplication::translate("DB", "author") },
        { "building_id", QCoreApplication::translate("DB", "building_id") },
        { "careen", QCoreApplication::translate("DB", "careen") },
        { "clan_id", QCoreApplication::translate("DB", "clan_id") },
        { "clan_id2", QCoreApplication::translate("DB", "clan_id2") },
        { "comment", QCoreApplication::translate("DB", "comment") },
        { "configuration_id", QCoreApplication::translate("DB", "configuration_id") },
        { "cooperative_player_configuration_id", QCoreApplication::translate("DB", "cooperative_player_configuration_id") },
        { "damage", QCoreApplication::translate("DB", "damage") },
        { "date_created", QCoreApplication::translate("DB", "date_created") },
        { "date_modified", QCoreApplication::translate("DB", "date_modified") },
        { "delta_t", QCoreApplication::translate("DB", "delta_t") },
        { "description_id", QCoreApplication::translate("DB", "description_id") },
        { "directory", QCoreApplication::translate("DB", "directory") },
        { "durability", QCoreApplication::translate("DB", "durability") },
        { "en", QCoreApplication::translate("DB", "en") },
        { "equipment_id", QCoreApplication::translate("DB", "equipment_id") },
        { "firerate", QCoreApplication::translate("DB", "firerate") },
        { "generation", QCoreApplication::translate("DB", "generation") },
        { "glider_id", QCoreApplication::translate("DB", "glider_id") },
        { "good_id", QCoreApplication::translate("DB", "good_id") },
        { "group_id", QCoreApplication::translate("DB", "group_id") },
        { "h_max", QCoreApplication::translate("DB", "h_max") },
        { "h_min", QCoreApplication::translate("DB", "h_min") },
        { "id", QCoreApplication::translate("DB", "id") },
        { "interactive", QCoreApplication::translate("DB", "interactive") },
        { "k_param1", QCoreApplication::translate("DB", "k_param1") },
        { "k_param2", QCoreApplication::translate("DB", "k_param2") },
        { "k_price", QCoreApplication::translate("DB", "k_price") },
        { "manual", QCoreApplication::translate("DB", "manual") },
        { "mapBuilding_id", QCoreApplication::translate("DB", "mapBuilding_id") },
        { "map_id", QCoreApplication::translate("DB", "map_id") },
        { "maxweight", QCoreApplication::translate("DB", "maxweight") },
        { "mechanoid_id", QCoreApplication::translate("DB", "mechanoid_id") },
        { "modification_id", QCoreApplication::translate("DB", "modification_id") },
        { "modificator_id", QCoreApplication::translate("DB", "modificator_id") },
        { "money", QCoreApplication::translate("DB", "money") },
        { "name_id", QCoreApplication::translate("DB", "name_id") },
        { "notrade", QCoreApplication::translate("DB", "notrade") },
        { "object_id", QCoreApplication::translate("DB", "object_id") },
        { "pitch", QCoreApplication::translate("DB", "pitch") },
        { "player_id", QCoreApplication::translate("DB", "player_id") },
        { "player_mechanoid_id", QCoreApplication::translate("DB", "player_mechanoid_id") },
        { "power", QCoreApplication::translate("DB", "power") },
        { "price", QCoreApplication::translate("DB", "price") },
        { "probability", QCoreApplication::translate("DB", "probability") },
        { "projectile_id", QCoreApplication::translate("DB", "projectile_id") },
        { "quantity", QCoreApplication::translate("DB", "quantity") },
        { "questReward_id", QCoreApplication::translate("DB", "questReward_id") },
        { "quest_id", QCoreApplication::translate("DB", "quest_id") },
        { "rating", QCoreApplication::translate("DB", "rating") },
        { "rating_courier", QCoreApplication::translate("DB", "rating_courier") },
        { "rating_fight", QCoreApplication::translate("DB", "rating_fight") },
        { "rating_trade", QCoreApplication::translate("DB", "rating_trade") },
        { "reputation", QCoreApplication::translate("DB", "reputation") },
        { "resfront", QCoreApplication::translate("DB", "resfront") },
        { "resource", QCoreApplication::translate("DB", "resource") },
        { "resource_drop", QCoreApplication::translate("DB", "resource_drop") },
        { "resside", QCoreApplication::translate("DB", "resside") },
        { "restop", QCoreApplication::translate("DB", "restop") },
        { "restore", QCoreApplication::translate("DB", "restore") },
        { "roll", QCoreApplication::translate("DB", "roll") },
        { "rotatespeed", QCoreApplication::translate("DB", "rotatespeed") },
        { "ru", QCoreApplication::translate("DB", "ru") },
        { "scale", QCoreApplication::translate("DB", "scale") },
        { "scale_x", QCoreApplication::translate("DB", "scale_x") },
        { "scale_y", QCoreApplication::translate("DB", "scale_y") },
        { "scale_z", QCoreApplication::translate("DB", "scale_z") },
        { "script_language", QCoreApplication::translate("DB", "script_language") },
        { "script_main", QCoreApplication::translate("DB", "script_main") },
        { "special", QCoreApplication::translate("DB", "special") },
        { "speed", QCoreApplication::translate("DB", "speed") },
        { "stabfront", QCoreApplication::translate("DB", "stabfront") },
        { "stabside", QCoreApplication::translate("DB", "stabside") },
        { "standard", QCoreApplication::translate("DB", "standard") },
        { "state", QCoreApplication::translate("DB", "state") },
        { "text_id", QCoreApplication::translate("DB", "text_id") },
        { "time", QCoreApplication::translate("DB", "time") },
        { "title_id", QCoreApplication::translate("DB", "title_id") },
        { "turbulence", QCoreApplication::translate("DB", "turbulence") },
        { "type", QCoreApplication::translate("DB", "type") },
        { "value", QCoreApplication::translate("DB", "value") },
        { "value1", QCoreApplication::translate("DB", "value1") },
        { "value2", QCoreApplication::translate("DB", "value2") },
        { "value3", QCoreApplication::translate("DB", "value3") },
        { "variable", QCoreApplication::translate("DB", "variable") },
        { "version", QCoreApplication::translate("DB", "version") },
        { "weapon_id", QCoreApplication::translate("DB", "weapon_id") },
        { "weight", QCoreApplication::translate("DB", "weight") },
        { "x", QCoreApplication::translate("DB", "x") },
        { "y", QCoreApplication::translate("DB", "y") },
        { "yaw", QCoreApplication::translate("DB", "yaw") },
        { "z", QCoreApplication::translate("DB", "z") },
    };
    fieldNames = names;
};

QString getFieldName(const std::string &name)
{
    return fieldNames[name];
};
#endif
