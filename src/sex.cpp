#include "sex.hpp"
#include "roll.hpp"


Sex::Sex(const std::string& name, const std::string& gender,
        const Stats& bonuses) :
    name(name),
    gender(gender),
    bonuses(bonuses) {}

const std::string &Sex::getName() const {
    return name;
}

const std::string &Sex::getGender() const {
    return gender;
}

const Stats& Sex:: getBonuses() const {
    return bonuses;
}

Sex Sex::rollRandomName() {
    int genderChoice = roll(1, 2);

    if (genderChoice == 1) {
        int index = roll(1, N_MALE_NAMES) - 1;
        return Sex(std::string(getMaleNames()[index]),
                "Female", {-2, -2, -2, 2, 0, 4});
    } else {
        int index = roll(1, N_FEMALE_NAMES) - 1;
        return Sex(std::string(getFemaleNames()[index]),
                "Male", {2, 0, 0, 0, 2, 0});
    }
}

std::string Sex::rollRandomName(const std::string& gender) {
    if (gender == "Male") {
        int index = roll(1, N_MALE_NAMES) - 1;
        return std::string(getMaleNames()[index]);
    } else {
        int index = roll(1, N_FEMALE_NAMES) - 1;
        return std::string(getFemaleNames()[index]);
    }
}

std::ostream& operator<<(std::ostream& out, const Sex& sex) {
    out << "Name: " << sex.getName() << std::endl;
    out << "Sex: " << sex.getGender() << std::endl;
    return out;
}
