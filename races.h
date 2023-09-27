#ifndef RACES_H
#define RACES_H

#include <string>
#include <vector>
#include "stats.h"

class Race {
    public:
        Race(const std::string& name, const Stats& bonuses, const std::vector<std::string>& preferredClasses);

        const std::string& getName() const;
        const Stats& getBonuses() const;
        const std::vector<std::string>& getPreferredClasses() const;

    private:
        std::string name;
        Stats bonuses;
        std::vector<std::string> preferredClasses;
};

#endif // RACES_H
