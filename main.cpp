#include <iostream>
#include <string>
#include <vector>
#include "roll.h"
#include "sex.h"
#include "race.h"
#include "stats.h"
#include "cls.h"

struct Race {
    std::string name;
    Stats bonuses;
    std::vector<std::string> preferredClasses;
};

struct Class {
    std::string name;
    Stats minimumStats;
    int hitDice;
};

struct Sex {
    std::string name;
    Stats bonuses;
};

bool meetsRequirements(const Stats &rolled, const Stats &required) {
    return rolled.str >= required.str &&
           rolled.intel >= required.intel &&
           rolled.wis >= required.wis &&
           rolled.dex >= required.dex &&
           rolled.con >= required.con &&
           rolled.cha >= required.cha;
}

Stats rolledStats() {
    return {
        roll(3, 6),
        roll(3, 6),
        roll(3, 6),
        roll(3, 6),
        roll(3, 6),
        roll(3, 6)
    };
}



int main() {
    Sex male = {
        "Male",
        {0, 0, 0, 0, 0, 0}
    };
    
    Sex female = {
        {-2, -2, -2, 2, 0, 4}
    };

    std::vector<Race> races = {
        {"Astari",      {-2, 2, 0, 2, -2, 0}, {"Magic User", "Thief"}},
        {"Bardik",      {-2, 0, 0, 0, -2, 4}, {"Bard", "Witch"}},
        {"Confed",      {0, -2, 2, 0, 2, -2}, {}},
        {"Demi-Giant",  {8, -2, -2, -2, 4, -2}, {"Barbarian", "Cleric"}},
        {"Dwarf",       {0, 0, 0, 0, 2, -2}, {"Fighter"}},
        {"Elf",         {0, 0, 0, 2, -2, 0}, {"Magic User"}},
        {"Ghuls",       {2, 0, 0, 0, 0, -2}, {"Fighter"}},
        {"Gnome",       {-2, 0, 0, 0, 2, 0}, {"Illusionist"}},
        {"Half-Elf",    {0, 0, 0, 1, -1, 0}, {}},
        {"Half-Orc",    {2, -2, 0, 0, 0, -2}, {"Barbarian"}},
        {"Halfling",    {-2, 0, 0, 2, 0, 0}, {"Thief"}},
        {"Human",       {0, 0, 0, 0, 0, 0}, {}},
        {"Lunari",      {-2, 2, 2, 2, 0, 0}, {"Sage", "Magic User", "Druid"}},
        {"Orc",         {4, -2, -2, 0, 0, -2}, {"Barbarian"}},
        {"Solari",      {2, 0, 2, 0, 0, 2}, {"Fighter", "Paladin", "Cleric"}},
        {"Swertling",   {0, -2, -2, 0, 0, -2}, {"Barbarian", "Cleric"}},
    };

    std::vector<Class> classes = {
        {"Alchemist",   {6, 6, 9, 6, 6, 9}, 4},
        {"Amazon",      {12, 9, 13, 9, 9, 17}, 10},
        {"Animal Trainer", {6, 6, 9, 6, 6, 9}, 6},
        {"Assassin",    {6, 6, 9, 6, 6, 9}, 6},
        {"Barbarian",   {9, 3, 3, 9, 3, 3}, 12},
        {"Bard",        {6, 6, 9, 6, 6, 9}, 6},
        {"Berzerker",   {9, 3, 3, 9, 3, 3}, 12},
        {"Cleric",      {9, 9, 9, 9, 9, 9}, 8},
        {"Druid",       {12, 12, 15, 12, 12, 15}, 8},
        {"Fighter",     {9, 3, 3, 9, 3, 3}, 10},
        {"Illusionist", {6, 16, 16, 6, 6, 16}, 4},
        {"Knight",      {9, 3, 3, 9, 3, 3}, 10},
        {"Magic User",  {3, 9, 9, 3, 3, 9}, 4},
        {"Monk",        {15, 15, 15, 15, 15, 15}, 6},
        {"Paladin",     {12, 9, 13, 9, 9, 17}, 10},
        {"Ranger",      {13, 13, 14, 13, 13, 14}, 8},
        {"Sage",        {15, 15, 15, 15, 15, 15}, 4},
        {"Samurai",     {12, 9, 13, 9, 9, 17}, 10},
        {"Thief",       {6, 6, 9, 6, 6, 9}, 6},
        {"Valkyrie",    {9, 3, 3, 9, 3, 3}, 10},
        {"Viking",      {9, 3, 3, 9, 3, 3}, 10},
        {"Witch",       {9, 9, 12, 9, 9, 12}, 4},
    };


    for(const Race &race : races) {
        for(const Sex &sex : {male, female}) {
            Stats modifiedStats = {
                rolledStats.str + race.bonuses.str + sex.bonuses.str,
                rolledStats.intel + race.bonuses.intel + sex.bonuses.intel,
                rolledStats.wis + race.bonuses.wis + sex.bonuses.wis,
                rolledStats.dex + race.bonuses.dex + sex.bonuses.dex,
                rolledStats.con + race.bonuses.con + sex.bonuses.con,
                rolledStats.cha + race.bonuses.cha + sex.bonuses.cha
            };

            for(const Class &cls : classes) {
                if(meetsRequirements(modifiedStats, cls.minimumStats)) {

                    std::cout << race.name << " can be a " << cls.name << "\n";
                }
            }
        }
    }


    return 0;
}
