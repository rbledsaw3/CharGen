#ifndef CLS_H
#define CLS_H

#include <string>
#include "stats.h"

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

#endif // CLS_H
