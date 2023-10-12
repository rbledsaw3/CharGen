#ifndef SRC_SEX_H_
#define SRC_SEX_H_

#include <iostream>
#include <string>
#include <vector>
#include "stats.h"

class Sex {
 public:
    Sex(const std::string &name, const std::string &gender,
            const Stats &bonuses);

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

std::ostream& operator<<(std::ostream &os, const Sex &sex);

#endif  // SRC_SEX_H_
