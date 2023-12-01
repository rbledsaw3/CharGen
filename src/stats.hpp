#ifndef SRC_STATS_HPP_
#define SRC_STATS_HPP_

#include <iostream>

const int statDieQty { 3 };
const int statDieSides { 6 };

struct StatValues {
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
};

class Stats {
  public:
    // Constructors
    Stats() = default;
    explicit Stats(const StatValues& values);

    // Getters
    [[nodiscard]]
    int getStrength() const;
    [[nodiscard]]
    int getDexterity() const;
    [[nodiscard]]
    int getConstitution() const;
    [[nodiscard]]
    int getIntelligence() const;
    [[nodiscard]]
    int getWisdom() const;
    [[nodiscard]]
    int getCharisma() const;

    // Setters
    void setStrength(const int& strength);
    void setDexterity(const int& dexterity);
    void setConstitution(const int& constitution);
    void setIntelligence(const int& intelligence);
    void setWisdom(const int& wisdom);
    void setCharisma(const int& charisma);

    void setStats(const StatValues& values);
    void addStats(const StatValues& values);
    void subtractStats(const StatValues& values);

  private:
    int strength { 0 };
    int dexterity { 0 };
    int constitution { 0 };
    int intelligence { 0 };
    int wisdom { 0 };
    int charisma { 0 };
};

// Global functions for rolling stats
Stats rolledStats();
Stats rolledStats(const StatValues& values);
Stats rolledStats(const Stats& stats);

std::ostream& operator<<(std::ostream& out, const Stats& stats);

#endif  // SRC_STATS_HPP_
