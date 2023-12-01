#include "cls.hpp"
#include "races.hpp"
#include "roll.hpp"
#include "sex.hpp"
#include "stats.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
  const int dieCount1 { 1 };
  const int dieCount2 { 2 };
  const int dieCount3 { 3 };
  const int dieSides { 6 };
  std::cout << roll<dieCount1, dieSides>() << std::endl;
  std::cout << roll<dieCount2, dieSides>() << std::endl;
  std::cout << roll<dieCount3, dieSides>() << std::endl;
  std::cout << "Random female name: " << Sex::rollRandomName(FEMALE) << std::endl;
  std::cout << "Random male name: " << Sex::rollRandomName(MALE) << std::endl;
  std::cout << "Random stats: " << rolledStats() << std::endl;
  std::cout << "Samurai hit dice is: " << getSamurai().getHitDie() << std::endl;
  std::cout << "Astari preferred class is: " << getAstari().getPreferredClasses().at(0) << std::endl;
  Sex newChar(Sex::rollRandomName());
  std::cout << "Random name: " << newChar << std::endl;
  std::cout << "Another random name: " << Sex::rollRandomName() << std::endl;

  return 0;
}
