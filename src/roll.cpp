#include "roll.hpp"

int roll(int diceQty, int diceSides) {
    if (diceQty < 1) {
        std::cerr <<
            "Error: dice quantity cannot be less than 1. Defaulting to 1."
            << std::endl;
        diceQty = 1;
    }
    if (diceSides < 2) {
        std::cerr <<
            "Error: dice sides cannot be less than 2. Defaulting to 2."
            << std::endl;
        diceSides = 2;
    }

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

std::ostream& operator<<(std::ostream &out, const RollResultProxy &roll) {
    out << "Rolled" << roll.diceQty << "d"
        << roll.diceSides << ": " << roll.result;
    return out;
}
