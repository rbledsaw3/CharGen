#include "cls.hpp"

Cls::Cls(std::string name, const StatValues& minStats, const int& hitDie)
  : name(std::move(name)),
    minStats(minStats),
    hitDie(hitDie) {}

const std::string& Cls::getName() const {
  return name;
}

const StatValues& Cls::getMinStats() const {
  return minStats;
}

const int& Cls::getHitDie() const {
  return hitDie;
}

const Cls& getAlchemist() {
  static const Cls instance("Alchemist", { 6, 6, 9, 6, 6, 9 }, 4);
  return instance;
}

const Cls& getAmazon() {
  static const Cls instance("Amazon", { 12, 9, 13, 9, 9, 17 }, 10);
  return instance;
}

const Cls& getAnimalTrainer() {
  static const Cls instance("Animal Trainer", { 6, 6, 9, 6, 6, 9 }, 6);
  return instance;
}

const Cls& getAssassin() {
  static const Cls instance("Assassin", { 6, 6, 9, 6, 6, 9 }, 6);
  return instance;
}

const Cls& getBarbarian() {
  static const Cls instance("Barbarian", { 9, 3, 3, 9, 3, 3 }, 12);
  return instance;
}

const Cls& getBard() {
  static const Cls instance("Bard", { 6, 6, 9, 6, 6, 9 }, 6);
  return instance;
}

const Cls& getBeggar() {
  static const Cls instance("Beggar", { 6, 6, 9, 6, 6, 9 }, 6);
  return instance;
}

const Cls& getBerzerker() {
  static const Cls instance("Berzerker", { 9, 3, 3, 9, 3, 3 }, 12);
  return instance;
}

const Cls& getBountyHunter() {
  static const Cls instance("Bounty Hunter", { 9, 3, 3, 9, 3, 3 }, 10);
  return instance;
}

const Cls& getCleric() {
  static const Cls instance("Cleric", { 9, 9, 9, 9, 9, 9 }, 8);
  return instance;
}

const Cls& getDruid() {
  static const Cls instance("Druid", { 12, 12, 15, 12, 12, 15 }, 8);
  return instance;
}

const Cls& getFighter() {
  static const Cls instance("Fighter", { 9, 3, 3, 9, 3, 3 }, 10);
  return instance;
}

const Cls& getIllusionist() {
  static const Cls instance("Illusionist", { 6, 16, 16, 6, 6, 16 }, 4);
  return instance;
}

const Cls& getKnight() {
  static const Cls instance("Knight", { 9, 3, 3, 9, 3, 3 }, 10);
  return instance;
}

const Cls& getMagicUser() {
  static const Cls instance("Magic User", { 3, 9, 9, 3, 3, 9 }, 4);
  return instance;
}

const Cls& getMonk() {
  static const Cls instance("Monk", { 15, 15, 15, 15, 15, 15 }, 6);
  return instance;
}

const Cls& getPaladin() {
  static const Cls instance("Paladin", { 12, 9, 13, 9, 9, 17 }, 10);
  return instance;
}

const Cls& getRanger() {
  static const Cls instance("Ranger", { 13, 13, 14, 13, 13, 14 }, 8);
  return instance;
}

const Cls& getSage() {
  static const Cls instance("Sage", { 15, 15, 15, 15, 15, 15 }, 4);
  return instance;
}

const Cls& getSamurai() {
  static const Cls instance("Samurai", { 12, 9, 13, 9, 9, 17 }, 10);
  return instance;
}

const Cls& getThief() {
  static const Cls instance("Thief", { 6, 6, 9, 6, 6, 9 }, 6);
  return instance;
}

const Cls& getValkyrie() {
  static const Cls instance("Valkyrie", { 9, 3, 3, 9, 3, 3 }, 10);
  return instance;
}

const Cls& getViking() {
  static const Cls instance("Viking", { 9, 3, 3, 9, 3, 3 }, 10);
  return instance;
}

const Cls& getWitch() {
  static const Cls instance("Witch", { 9, 9, 12, 9, 9, 12 }, 4);
  return instance;
}
