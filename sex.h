#ifndef SEX_H
#define SEX_H

#include <string>
#include <vector>
#include "stats.h"

class Sex {
public:
    Sex(const std::string &name, const std::string &gender, const Stats &bonuses);

    const std::string &getName() const;

    const std::string &getGender() const;

    const Stats &getBonuses() const;

    static const std::vector<std::string>& getMaleNames();
    static const std::vector<std::string>& getFemaleNames();

    static Sex rollRandomName();
    static std::string rollRandomName(const std::string& gender);

private:
    std::string name;
    std::string gender;
    Stats bonuses;
};

#endif // SEX_H
