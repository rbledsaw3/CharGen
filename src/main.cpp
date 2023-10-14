#include <iostream>
#include <string>
#include <vector>
#include "roll.h"
#include "sex.h"
#include "races.h"
#include "stats.h"
#include "cls.h"


int main() {
    std::cout << roll<1, 6>() << std::endl;
    std::cout << roll<2, 6>() << std::endl;
    std::cout << roll<3, 6>() << std::endl;
    std::cout << "Random female name: " << Sex::rollRandomName("Female")
        << std::endl;
    std::cout << "Random male name: " << Sex::rollRandomName("Male")
        << std::endl;
    std::cout << "Random stats: " << rolledStats() << std::endl;
    std::cout << "Samurai hit dice is: " << Samurai.getHitDie() << std::endl;
    std::cout << "Astari preferred class is: "
        << Astari.getPreferredClasses()[0] << std::endl;
    Sex newChar(Sex::rollRandomName());
    std::cout << "Random name: " << newChar << std::endl;
    std::cout << "Another random name: " << Sex::rollRandomName() << std::endl;

    return 0;
}
