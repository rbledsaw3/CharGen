#include "roll.h"
#include <random>


int roll(int diceQty, int diceSides) {
    std::random_device rDev;  // initiates a random device

    // set the distribution bounds to the total number of die sides
    std::uniform_int_distribution<int> dist(1, diceSides);

    int results = 0;
    // sum the total number of die rolls
    for (int i = 0; i < diceQty; ++i) {
        results += dist(rDev);
    }

    return results;
}
