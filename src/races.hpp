#ifndef SRC_RACES_HPP_
#define SRC_RACES_HPP_

#include "stats.hpp"
#include <string>
#include <vector>

class Race {
  public:
    Race(const std::string& name, const Stats& bonuses, const std::vector<std::string>& preferredClasses);

    const std::string& getName() const;
    const Stats& getBonuses() const;
    const std::vector<std::string>& getPreferredClasses() const;

  private:
    std::string name;
    Stats bonuses;
    std::vector<std::string> preferredClasses;
};

extern const Race Astari;
extern const Race Bardik;
extern const Race Confed;
extern const Race DemiGiant;
extern const Race Dwarf;
extern const Race Elf;
extern const Race Ghuls;
extern const Race Gnome;
extern const Race HalfElf;
extern const Race HalfOrc;
extern const Race Halfling;
extern const Race Human;
extern const Race Lunari;
extern const Race Orc;
extern const Race Solari;
extern const Race Swertling;

#endif  // SRC_RACES_HPP_
