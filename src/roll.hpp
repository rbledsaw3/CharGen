#ifndef SRC_ROLL_HPP_
#define SRC_ROLL_HPP_

#include <iostream>
#include <random>
#include <type_traits>

struct DiceQty {
    int value;
    explicit DiceQty(int value)
      : value(value) {};
};

struct DiceSides {
    int value;
    explicit DiceSides(int value)
      : value(value) {};
};

struct RollResultProxy {
    DiceQty diceQty;
    DiceSides diceSides;
    int result;

    RollResultProxy(DiceQty diceQty, DiceSides diceSides, int result)
      : diceQty(diceQty),
        diceSides(diceSides),
        result(result) {}

    explicit operator int() const {
      return result;
    }
};

template<int diceQty, int diceSides> RollResultProxy roll() {
  static_assert(diceQty > 0, "Dice quantity must be greater than 0");
  static_assert(diceSides > 0, "Dice sides must be greater than 0");

  std::random_device rDev;  // initiates a random device

  // set the distribution bounds to the total number of die sides
  std::uniform_int_distribution<int> dist(1, diceSides);

  int results = 0;
  // sum the total number of die rolls
  for (int i = 0; i < diceQty; ++i) {
    results += dist(rDev);
  }

  return { DiceQty(diceQty), DiceSides(diceSides), results };
}

int roll(DiceQty diceQty, DiceSides diceSides);

std::ostream& operator<<(std::ostream& out, const RollResultProxy& roll);

#endif  // SRC_ROLL_HPP_
