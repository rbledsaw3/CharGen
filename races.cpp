#include "races.h"

Race::Race(const std::string& name, const Stats& bonuses, const std::vector<std::string>& preferredClasses) :
    name(name),
    bonuses(bonuses),
    preferredClasses(preferredClasses) {}

const std::string& Race::getName() const {
    return name;
}

const Stats& Race::getBonuses() const {
    return bonuses;
}

const std::vector<std::string>& Race::getPreferredClasses() const {
    return preferredClasses;
}

const Race Astari("Astari",      {-2, 2, 0, 2, -2, 0}, {"Magic User", "Thief"});
const Race Bardik("Bardik",      {-2, 0, 0, 0, -2, 4}, {"Bard", "Witch"});
const Race Confed("Confed",      {0, -2, 2, 0, 2, -2}, {});
const Race DemiGiant("Demi-Giant",  {8, -2, -2, -2, 4, -2}, {"Barbarian", "Cleric"});
const Race Dwarf("Dwarf",       {0, 0, 0, 0, 2, -2}, {"Fighter"});
const Race Elf("Elf",         {0, 0, 0, 2, -2, 0}, {"Magic User"});
const Race Ghuls("Ghuls",       {2, 0, 0, 0, 0, -2}, {"Fighter"});
const Race Gnome("Gnome",       {-2, 0, 0, 0, 2, 0}, {"Illusionist"});
const Race HalfElf("Half-Elf",    {0, 0, 0, 1, -1, 0}, {});
const Race HalfOrc("Half-Orc",    {2, -2, 0, 0, 0, -2}, {"Barbarian"});
const Race Halfling("Halfling",    {-2, 0, 0, 2, 0, 0}, {"Thief"});
const Race Human("Human",       {0, 0, 0, 0, 0, 0}, {});
const Race Lunari("Lunari",      {-2, 2, 2, 2, 0, 0}, {"Sage", "Magic User", "Druid"});
const Race Orc("Orc",         {4, -2, -2, 0, 0, -2}, {"Barbarian"});
const Race Solari("Solari",      {2, 0, 2, 0, 0, 2}, {"Fighter", "Paladin", "Cleric"});
const Race Swertling("Swertling",   {0, -2, -2, 0, 0, -2}, {"Barbarian", "Cleric"});
