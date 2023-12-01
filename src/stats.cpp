#include "stats.hpp"
#include "roll.hpp"

Stats::Stats(const StatValues& values)
  : strength(values.strength),
    dexterity(values.dexterity),
    constitution(values.constitution),
    intelligence(values.intelligence),
    wisdom(values.wisdom),
    charisma(values.charisma) {}

int Stats::getStrength() const {
  return this->strength;
}

int Stats::getDexterity() const {
  return this->dexterity;
}

int Stats::getConstitution() const {
  return this->constitution;
}

int Stats::getIntelligence() const {
  return this->intelligence;
}

int Stats::getWisdom() const {
  return this->wisdom;
}

int Stats::getCharisma() const {
  return this->charisma;
}

void Stats::setStrength(const int& strength) {
  this->strength = strength;
}

void Stats::setDexterity(const int& dexterity) {
  this->dexterity = dexterity;
}

void Stats::setConstitution(const int& constitution) {
  this->constitution = constitution;
}

void Stats::setIntelligence(const int& intelligence) {
  this->intelligence = intelligence;
}

void Stats::setWisdom(const int& wisdom) {
  this->wisdom = wisdom;
}

void Stats::setCharisma(const int& charisma) {
  this->charisma = charisma;
}

void Stats::setStats(const StatValues& values) {
  this->strength = values.strength;
  this->dexterity = values.dexterity;
  this->constitution = values.constitution;
  this->intelligence = values.intelligence;
  this->wisdom = values.wisdom;
  this->charisma = values.charisma;
}

void Stats::addStats(const StatValues& values) {
  this->strength += values.strength;
  this->dexterity += values.dexterity;
  this->constitution += values.constitution;
  this->intelligence += values.intelligence;
  this->wisdom += values.wisdom;
  this->charisma += values.charisma;
}

void Stats::subtractStats(const StatValues& values) {
  this->strength -= values.strength;
  this->dexterity -= values.dexterity;
  this->constitution -= values.constitution;
  this->intelligence -= values.intelligence;
  this->wisdom -= values.wisdom;
  this->charisma -= values.charisma;
}

Stats rolledStats() {
  Stats stats;
  stats.setStrength(roll(DiceQty(statDieQty), DiceSides(statDieSides)));
  stats.setDexterity(roll(DiceQty(statDieQty), DiceSides(statDieSides)));
  stats.setConstitution(roll(DiceQty(statDieQty), DiceSides(statDieSides)));
  stats.setIntelligence(roll(DiceQty(statDieQty), DiceSides(statDieSides)));
  stats.setWisdom(roll(DiceQty(statDieQty), DiceSides(statDieSides)));
  stats.setCharisma(roll(DiceQty(statDieQty), DiceSides(statDieSides)));
  return stats;
}

Stats rolledStats(const StatValues& values) {
  Stats stats;
  stats.setStrength(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + values.strength);
  stats.setDexterity(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + values.dexterity);
  stats.setConstitution(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + values.constitution);
  stats.setIntelligence(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + values.intelligence);
  stats.setWisdom(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + values.wisdom);
  stats.setCharisma(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + values.charisma);
  return stats;
}

Stats rolledStats(const Stats& stats) {
  Stats newStats;
  newStats.setStrength(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + stats.getStrength());
  newStats.setDexterity(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + stats.getDexterity());
  newStats.setConstitution(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + stats.getConstitution());
  newStats.setIntelligence(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + stats.getIntelligence());
  newStats.setWisdom(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + stats.getWisdom());
  newStats.setCharisma(roll(DiceQty(statDieQty), DiceSides(statDieSides)) + stats.getCharisma());
  return newStats;
}

std::ostream& operator<<(std::ostream& out, const Stats& stats) {
  out << "Strength: " << stats.getStrength() << std::endl;
  out << "Dexterity: " << stats.getDexterity() << std::endl;
  out << "Constitution: " << stats.getConstitution() << std::endl;
  out << "Intelligence: " << stats.getIntelligence() << std::endl;
  out << "Wisdom: " << stats.getWisdom() << std::endl;
  out << "Charisma: " << stats.getCharisma() << std::endl;
  return out;
}
