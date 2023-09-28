#include "stats.h"

Stats::Stats() {
    this->strength = 0;
    this->dexterity = 0;
    this->constitution = 0;
    this->intelligence = 0;
    this->wisdom = 0;
    this->charisma = 0;
}

Stats::Stats(const int &strength, const int &dexterity, const int &constitution, const int &intelligence,
             const int &wisdom, const int &charisma) {
    this->strength = strength;
    this->dexterity = dexterity;
    this->constitution = constitution;
    this->intelligence = intelligence;
    this->wisdom = wisdom;
    this->charisma = charisma;
}

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

void Stats::setStrength(const int &strength) {
    this->strength = strength;
}

void Stats::setDexterity(const int &dexterity) {
    this->dexterity = dexterity;
}

void Stats::setConstitution(const int &constitution) {
    this->constitution = constitution;
}

void Stats::setIntelligence(const int &intelligence) {
    this->intelligence = intelligence;
}

void Stats::setWisdom(const int &wisdom) {
    this->wisdom = wisdom;
}

void Stats::setCharisma(const int &charisma) {
    this->charisma = charisma;
}

void Stats::setStats(const int &strength, const int &dexterity, const int &constitution, const int &intelligence,
                     const int &wisdom, const int &charisma) {
    this->strength = strength;
    this->dexterity = dexterity;
    this->constitution = constitution;
    this->intelligence = intelligence;
    this->wisdom = wisdom;
    this->charisma = charisma;
}

void Stats::setStats(const Stats &stats) {
    this->strength = stats.getStrength();
    this->dexterity = stats.getDexterity();
    this->constitution = stats.getConstitution();
    this->intelligence = stats.getIntelligence();
    this->wisdom = stats.getWisdom();
    this->charisma = stats.getCharisma();
}

void Stats::addStats(const Stats &stats) {
    this->strength += stats.getStrength();
    this->dexterity += stats.getDexterity();
    this->constitution += stats.getConstitution();
    this->intelligence += stats.getIntelligence();
    this->wisdom += stats.getWisdom();
    this->charisma += stats.getCharisma();
}

void Stats::subtractStats(const Stats &stats) {
    this->strength -= stats.getStrength();
    this->dexterity -= stats.getDexterity();
    this->constitution -= stats.getConstitution();
    this->intelligence -= stats.getIntelligence();
    this->wisdom -= stats.getWisdom();
    this->charisma -= stats.getCharisma();
}

Stats rolledStats() {
    Stats stats;
    stats.setStrength(roll(3, 6));
    stats.setDexterity(roll(3, 6));
    stats.setConstitution(roll(3, 6));
    stats.setIntelligence(roll(3, 6));
    stats.setWisdom(roll(3, 6));
    stats.setCharisma(roll(3, 6));
    return stats;
}

Stats rolledStats(const int &strength, const int &dexterity, const int &constitution, const int &intelligence,
                  const int &wisdom, const int &charisma) {
    Stats stats;
    stats.setStrength(roll(3, 6) + strength);
    stats.setDexterity(roll(3, 6) + dexterity);
    stats.setConstitution(roll(3, 6) + constitution);
    stats.setIntelligence(roll(3, 6) + intelligence);
    stats.setWisdom(roll(3, 6) + wisdom);
    stats.setCharisma(roll(3, 6) + charisma);
    return stats;
}

Stats rolledStats(const Stats &stats) {
    Stats newStats;
    newStats.setStrength(roll(3, 6) + stats.getStrength());
    newStats.setDexterity(roll(3, 6) + stats.getDexterity());
    newStats.setConstitution(roll(3, 6) + stats.getConstitution());
    newStats.setIntelligence(roll(3, 6) + stats.getIntelligence());
    newStats.setWisdom(roll(3, 6) + stats.getWisdom());
    newStats.setCharisma(roll(3, 6) + stats.getCharisma());
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
