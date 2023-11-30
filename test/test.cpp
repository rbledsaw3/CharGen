#include "../src/roll.hpp"
#include "../src/stats.hpp"
#include <iostream>

void test_roll() {
  // Test 1: Check bounds
  for (int i = 0; i < 10'000; ++i) {
    int result = roll<3, 6>();
    if ((result < 3) || (result > 18)) {
      std::cout << "Test 1 Failed: Value out of range. Result: " << result << std::endl;
      return;
    }
  }
  std::cout << "Test 1 Passed: Values are within expected range" << std::endl;

  // Test 2: Check distribution
  int total = 0;
  const int rolls = 10'000;
  for (int i = 0; i < rolls; ++i) {
    total += roll<1, 6>();
  }
  double average = static_cast<double>(total) / rolls;
  if ((average < 3.4) || (average > 3.6)) {
    std::cout << "Test 2 Failed: Distribution does not appear to be uniform. Mean: " << average << std::endl;
    return;
  }
  std::cout << "Test 2 Passed: Distribution appears to be uniform" << std::endl;

  // Test 3: Check edge cases prevention works
  int result = roll(0, 6);
  if (result < 1) {
    std::cout << "Test 3 Failed: Rolling 0d6 should get adjusted to 1d6. Result: " << result << std::endl;
    return;
  }
  result = roll(1, 0);
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
