#include "cls.hpp"

Cls::Cls(const std::string& name, const Stats& minStats, const int& hitDie) :
    name(name),
    minStats(minStats),
    hitDie(hitDie) {}

const std::string& Cls::getName() const {
    return name;
}

const Stats& Cls::getMinStats() const {
    return minStats;
}

const int& Cls::getHitDie() const {
    return hitDie;
}

const Cls Alchemist("Alchemist",   {6, 6, 9, 6, 6, 9}, 4);
const Cls Amazon("Amazon",      {12, 9, 13, 9, 9, 17}, 10);
const Cls AnimalTrainer("Animal Trainer", {6, 6, 9, 6, 6, 9}, 6);
const Cls Assassin("Assassin",    {6, 6, 9, 6, 6, 9}, 6);
const Cls Barbarian("Barbarian",   {9, 3, 3, 9, 3, 3}, 12);
const Cls Bard("Bard",        {6, 6, 9, 6, 6, 9}, 6);
const Cls Beggar("Beggar",    {6, 6, 9, 6, 6, 9}, 6);
const Cls Berzerker("Berzerker",   {9, 3, 3, 9, 3, 3}, 12);
const Cls BountyHunter("Bounty Hunter", {9, 3, 3, 9, 3, 3}, 10);
const Cls Cleric("Cleric",      {9, 9, 9, 9, 9, 9}, 8);
const Cls Druid("Druid",       {12, 12, 15, 12, 12, 15}, 8);
const Cls Fighter("Fighter",     {9, 3, 3, 9, 3, 3}, 10);
const Cls Illusionist("Illusionist", {6, 16, 16, 6, 6, 16}, 4);
const Cls Knight("Knight",      {9, 3, 3, 9, 3, 3}, 10);
const Cls MagicUser("Magic User",  {3, 9, 9, 3, 3, 9}, 4);
const Cls Monk("Monk",        {15, 15, 15, 15, 15, 15}, 6);
const Cls Paladin("Paladin",     {12, 9, 13, 9, 9, 17}, 10);
const Cls Ranger("Ranger",      {13, 13, 14, 13, 13, 14}, 8);
const Cls Sage("Sage",        {15, 15, 15, 15, 15, 15}, 4);
const Cls Samurai("Samurai",     {12, 9, 13, 9, 9, 17}, 10);
const Cls Thief("Thief",       {6, 6, 9, 6, 6, 9}, 6);
const Cls Valkyrie("Valkyrie",    {9, 3, 3, 9, 3, 3}, 10);
const Cls Viking("Viking",      {9, 3, 3, 9, 3, 3}, 10);
const Cls Witch("Witch",       {9, 9, 12, 9, 9, 12}, 4);
