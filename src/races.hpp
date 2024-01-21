#ifndef SRC_RACES_HPP_
#define SRC_RACES_HPP_

#include "stats.hpp"
#include <string>
#include <vector>

class Race {
  public:
    Race(std::string name,
         const StatValues& bonuses,
         const std::vector<std::string>& preferredClasses);

    [[nodiscard]]
    const std::string& getName() const;
    [[nodiscard]]
    const StatValues& getBonuses() const;
    [[nodiscard]]
    const std::vector<std::string>& getPreferredClasses() const;

  private:
    std::string name;
    StatValues bonuses;
    std::vector<std::string> preferredClasses;
};

const Race& getAstari();
const Race& getBardik();
const Race& getConfed();
const Race& getDemiGiant();
const Race& getDwarf();
const Race& getElf();
const Race& getGhuls();
const Race& getGnome();
const Race& getHalfElf();
const Race& getHalfOrc();
const Race& getHalfling();
const Race& getHuman();
const Race& getLunari();
const Race& getOrc();
const Race& getSolari();
const Race& getSwertling();

#endif  // SRC_RACES_HPP_
