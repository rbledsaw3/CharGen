#ifndef SRC_CLS_H_
#define SRC_CLS_H_

#include <string>
#include "stats.hpp"

class Cls {
 public:
        Cls(const std::string& name, const Stats& minStats, const int& hitDie);

        const std::string& getName() const;
        const Stats& getMinStats() const;
        const int& getHitDie() const;

 private:
        std::string name;
        Stats minStats;
        int hitDie;
};

extern const Cls Alchemist;
extern const Cls Amazon;
extern const Cls AnimalTrainer;
extern const Cls Assassin;
extern const Cls Barbarian;
extern const Cls Bard;
extern const Cls Beggar;
extern const Cls Berzerker;
extern const Cls BountyHunter;
extern const Cls Cleric;
extern const Cls Druid;
extern const Cls Fighter;
extern const Cls Illusionist;
extern const Cls Knight;
extern const Cls MagicUser;
extern const Cls Monk;
extern const Cls Paladin;
extern const Cls Ranger;
extern const Cls Sage;
extern const Cls Samurai;
extern const Cls Thief;
extern const Cls Valkyrie;
extern const Cls Viking;
extern const Cls Witch;

#endif  // SRC_CLS_H_
