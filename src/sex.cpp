#include "sex.hpp"
#include "roll.hpp"

Sex::Sex(std::string name, const Sex_t& gender, const StatValues& bonuses)
  : name(std::move(name)),
    gender(gender),
    bonuses(bonuses) {}

const std::string& Sex::getName() const {
  return name;
}

const Sex_t& Sex::getGender() const {
  return gender;
}

const StatValues& Sex::getBonuses() const {
  return bonuses;
}

Sex Sex::rollRandomName() {
  int genderChoice = roll(DiceQty(1), DiceSides(2));

  if (genderChoice == 1) {
    int index = roll(DiceQty(1), DiceSides(N_MALE_NAMES)) - 1;
    return {
      std::string(getMaleNames().at(index)), Sex_t::FEMALE, {-2, -2, -2, 2, 0, 4}
    };
  }
  int index = roll(DiceQty(1), DiceSides(N_FEMALE_NAMES)) - 1;
  return {
    std::string(getFemaleNames().at(index)), Sex_t::MALE, {2, 0, 0, 0, 2, 0}
  };
}

std::string Sex::rollRandomName(const Sex_t& gender) {
  if (gender == Sex_t::MALE) {
    int index = roll(DiceQty(1), DiceSides(N_MALE_NAMES)) - 1;
    return std::string(getMaleNames().at(index));
  }
  int index = roll(DiceQty(1), DiceSides(N_FEMALE_NAMES)) - 1;
  return std::string(getFemaleNames().at(index));
}

std::ostream& operator<<(std::ostream& out, const Sex& sex) {
  out << "Name: " << sex.getName() << std::endl;
  out << "Sex: " << sex.getGender() << std::endl;
  return out;
}
