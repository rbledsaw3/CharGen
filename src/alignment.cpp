#include <array>
#include "alignment.h"
#include "roll.h"

std::array<std::string, 9> alignment = {
    "lawful good",
    "neutral good",
    "chaotic good",
    "lawful neutral",
    "neutral",
    "chaotic neutral",
    "lawful evil",
    "neutral evil",
    "chaotic evil"
};

std::string getalignment(int index) {
    return alignment[index];
}

std::string rollrandomalignment() {
    return getalignment(roll(1,9));
}

// TODO: Add morality and ethics
