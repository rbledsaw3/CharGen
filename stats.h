#ifndef STATS_H
#define STATS_H

#include "roll.h"

struct Stats {
    int str, intel, wis, dex, con, cha;
};

Stats rollStats();

#endif // STATS_H
