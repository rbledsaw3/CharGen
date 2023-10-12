#ifndef SRC_STATS_H_
#define SRC_STATS_H_

#include <iostream>
#include "roll.h"

class Stats {
 public:
    // Constructors
    Stats();
    Stats(const int &strength, const int &dexterity, const int &constitution,
          const int &intelligence, const int &wisdom, const int &charisma);

    // Getters
    int getStrength() const;
    int getDexterity() const;
    int getConstitution() const;
    int getIntelligence() const;
    int getWisdom() const;
    int getCharisma() const;

    // Setters
    void setStrength(const int &strength);
    void setDexterity(const int &dexterity);
    void setConstitution(const int &constitution);
    void setIntelligence(const int &intelligence);
    void setWisdom(const int &wisdom);
    void setCharisma(const int &charisma);

    void setStats(const int &strength, const int &dexterity,
            const int &constitution, const int &intelligence,
            const int &wisdom, const int &charisma);

    void setStats(const Stats &stats);
    void addStats(const Stats &stats);
    void subtractStats(const Stats &stats);

 private:
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
};

// Global functions for rolling stats
Stats rolledStats();
Stats rolledStats(const int &strength, const int &dexterity,
        const int &constitution, const int &intelligence,
        const int &wisdom, const int &charisma);
Stats rolledStats(const Stats &stats);

std::ostream& operator<<(std::ostream& os, const Stats& stats);

#endif  // SRC_STATS_H_
