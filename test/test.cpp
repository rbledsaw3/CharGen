#include "../src/roll.hpp"
#include "../src/stats.hpp"
#include <iostream>

void test_roll() {
  // Test 1: Check bounds
  const int testQty = 10'000;
  const float testConfidenceLowerRange = 3.4;
  const float testConfidenceUpperRange = 3.6;
  for (int i = 0; i < testQty; ++i) {
    int result = roll(DiceQty(statDieQty), DiceSides(statDieSides));
    if ((result < statDieQty) || (result > (statDieQty * statDieSides))) {
      std::cout << "Test 1 Failed: Value out of range. Result: " << result << std::endl;
      return;
    }
  }
  std::cout << "Test 1 Passed: Values are within expected range" << std::endl;

  // Test 2: Check distribution
  int total = 0;
  const int rolls = 10'000;
  for (int i = 0; i < rolls; ++i) {
    total += roll(DiceQty(1), DiceSides(statDieSides));
  }
  double average = static_cast<double>(total) / rolls;
  if ((average < testConfidenceLowerRange) || (average > testConfidenceUpperRange)) {
    std::cout << "Test 2 Failed: Distribution does not appear to be uniform. Mean: " << average << std::endl;
    return;
  }
  std::cout << "Test 2 Passed: Distribution appears to be uniform" << std::endl;

  // Test 3: Check edge cases prevention works
  int result = roll(DiceQty(0), DiceSides(statDieSides));
  if (result < 1) {
    std::cout << "Test 3 Failed: Rolling 0d6 should get adjusted to 1d6. Result: " << result << std::endl;
    return;
  }
  result = roll(DiceQty(1), DiceSides(0));
  if (result < 1) {
    std::cout << "Test 3 Failed: Rolling 1d0 should get adjusted to 1d2. Result: " << result << std::endl;
    return;
  }
  std::cout << "Test 3 Passed: Edge cases are handled correctly.\n"
            << "If you see lines with \'Error: dice ...\' above, this test passed." << std::endl;
}

void test_stats() {
  // TODO(rbledsaw3): TEST STATS
}

int main() {
  test_roll();
  return 0;
}
