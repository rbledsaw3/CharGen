#ifndef SEX_H
#define SEX_H

#include <string>
#include <vector>

class Sex {
public:
    Sex(const std::string &name, const std::string &gender);

    const std::string &getName() const;

    const std::string &getGender() const;

    static const std::vector<std::string>& getMaleNames();
    static const std::vector<std::string>& getFemaleNames();

    static Sex rollRandomName();

private:
    std::string name;
    std::string gender;
};

#endif // SEX_H
