#ifndef SRC_CLS_HPP_
#define SRC_CLS_HPP_

#include "stats.hpp"
#include <string>

class Cls {
  public:
    Cls(std::string name, const StatValues& minStats, const int& hitDie);

    [[nodiscard]]
    const std::string& getName() const;
    [[nodiscard]]
    const StatValues& getMinStats() const;
    [[nodiscard]]
    const int& getHitDie() const;

  private:
    std::string name;
    StatValues minStats;
    int hitDie;
};

const Cls& getAlchemist();
const Cls& getAmazon();
const Cls& getAnimalTrainer();
const Cls& getAssassin();
const Cls& getBarbarian();
const Cls& getBard();
const Cls& getBeggar();
const Cls& getBerzerker();
const Cls& getBountyHunter();
const Cls& getCleric();
const Cls& getDruid();
const Cls& getFighter();
const Cls& getIllusionist();
const Cls& getKnight();
const Cls& getMagicUser();
const Cls& getMonk();
const Cls& getPaladin();
const Cls& getRanger();
const Cls& getSage();
const Cls& getSamurai();
const Cls& getThief();
const Cls& getValkyrie();
const Cls& getViking();
const Cls& getWitch();

#endif  // SRC_CLS_HPP_
