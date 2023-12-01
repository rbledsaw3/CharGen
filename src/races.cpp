#include "races.hpp"

Race::Race(std::string name, const StatValues& bonuses, const std::vector<std::string>& preferredClasses)
  : name(std::move(name)),
    bonuses(bonuses),
    preferredClasses(preferredClasses) {}

const std::string& Race::getName() const {
  return name;
}

const StatValues& Race::getBonuses() const {
  return bonuses;
}

const std::vector<std::string>& Race::getPreferredClasses() const {
  return preferredClasses;
}

const Race& getAstari() {
  static const Race instance("Astari", { -2, 2, 0, 2, -2, 0 }, { "Magic User", "Thief" });
  return instance;
}

const Race& getBardik() {
  static const Race instance("Bardik", { -2, 0, 0, 0, -2, 4 }, { "Bard", "Witch" });
  return instance;
}

const Race& getConfed() {
  static const Race instance("Confed", { 0, -2, 2, 0, 2, -2 }, {});
  return instance;
}

const Race& getDemiGiant() {
  static const Race instance("Demi-Giant", { 8, -2, -2, -2, 4, -2 }, { "Barbarian", "Cleric" });
  return instance;
}

const Race& getDwarf() {
  static const Race instance("Dwarf", { 0, 0, 0, 0, 2, -2 }, { "Fighter" });
  return instance;
}

const Race& getElf() {
  static const Race instance("Elf", { 0, 0, 0, 2, -2, 0 }, { "Magic User" });
  return instance;
}

const Race& getGhuls() {
  static const Race instance("Ghuls", { 2, 0, 0, 0, 0, -2 }, { "Fighter" });
  return instance;
}

const Race& getGnome() {
  static const Race instance("Gnome", { -2, 0, 0, 0, 2, 0 }, { "Illusionist" });
  return instance;
}

const Race& getHalfElf() {
  static const Race instance("Half-Elf", { 0, 0, 0, 1, -1, 0 }, {});
  return instance;
}

const Race& getHalfOrc() {
  static const Race instance("Half-Orc", { 2, -2, 0, 0, 0, -2 }, { "Barbarian" });
  return instance;
}

const Race& getHalfling() {
  static const Race instance("Halfling", { -2, 0, 0, 2, 0, 0 }, { "Thief" });
  return instance;
}

const Race& getHuman() {
  static const Race instance("Human", { 0, 0, 0, 0, 0, 0 }, {});
  return instance;
}

const Race& getLunari() {
  static const Race instance("Lunari", { -2, 2, 2, 2, 0, 0 }, { "Sage", "Magic User", "Druid" });
  return instance;
}

const Race& getOrc() {
  static const Race instance("Orc", { 4, -2, -2, 0, 0, -2 }, { "Barbarian" });
  return instance;
}

const Race& getSolari() {
  static const Race instance("Solari", { 2, 0, 2, 0, 0, 2 }, { "Fighter", "Paladin", "Cleric" });
  return instance;
}

const Race& getSwertling() {
  static const Race instance("Swertling", { 0, -2, -2, 0, 0, -2 }, { "Barbarian", "Cleric" });
  return instance;
}
