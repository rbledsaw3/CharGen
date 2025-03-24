# RPG Character Generation Framework

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/f754cd07f6a94f59bef63fcd6b241a11)](https://app.codacy.com/gh/rbledsaw3/CharGen/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade)

This robust framework simplifies the process of generating detailed RPG characters. It covers everything from rolling dice and assigning stats to specifying character races, classes, alignments, and attributes suitable for both player characters (PCs) and non-player characters (NPCs).

## Table of Contents
1. [Overview](#overview)
2. [Dice Rolling Mechanism](#dice-rolling-mechanism)
3. [Character Stats](#character-stats)
4. [Sex and Gender Attributes](#sex-and-gender-attributes)
5. [Race Attributes and Preferences](#race-attributes-and-preferences)
6. [Class System](#class-system)
7. [Alignment System](#alignment-system)
8. [Planned Enhancements](#planned-enhancements)
9. [Contribution Guidelines](#contribution-guidelines)
10. [Credits](#credits)
11. [Author](#author)

## Overview

The RPG Character Generation Framework provides a modular and flexible system for rapidly creating diverse characters. It draws inspiration and content from classic RPG sources, particularly the Wilderlands of High Fantasy setting.

## Dice Rolling Mechanism

The `roll.cpp` module handles dice mechanics, essential to RPG gameplay.

### Key Features
- **Validation:** Prevents invalid dice configurations.
- **Fairness:** Uses unbiased randomization (`std::random_device` and `std::uniform_int_distribution`).

### Example Usage
```cpp
#include "roll.h"

int main() {
    int result = roll(DiceQty(3), DiceSides(6));
    std::cout << "Result of rolling 3d6: " << result << std::endl;

    result = roll(DiceQty(0), DiceSides(1)); // Error handling demonstration
    std::cout << "Corrected roll result: " << result << std::endl;

    return 0;
}
```

## Character Stats

`stats.cpp` defines the character attributes essential for gameplay mechanics, including strength, dexterity, constitution, intelligence, wisdom, and charisma.

### Key Features
- Random generation adhering to classic RPG rules
- Easily readable character summaries

### Example Usage
```cpp
#include "stats.h"

int main() {
    Stats characterStats = rolledStats();
    std::cout << characterStats;
    return 0;
}
```

## Sex and Gender Attributes

`sex.cpp` provides gender-specific character details, including randomized names and optional attribute adjustments.

### Key Features
- Gender-based randomized naming
- Configurable attribute modifiers

### Example Usage
```cpp
#include "sex.h"

int main() {
    Sex randomSex = Sex::rollRandomName();
    std::cout << randomSex;
    return 0;
}
```

## Race Attributes and Preferences

`races.cpp` outlines diverse races from the Wilderlands campaign, each with distinct attributes, bonuses, and class preferences.

### Key Features
- Predefined racial attributes and bonuses
- Extensive Wilderlands lore integration

### Example Usage
```cpp
#include "races.h"

int main() {
    const Race& elf = getElf();
    std::cout << "Race: " << elf.getName() << std::endl;
    return 0;
}
```

## Class System

Classes defined in `cls.cpp` specify character professions, minimum required attributes, and hit dice.

### Included Classes
- Alchemist, Amazon, Assassin, Barbarian, Bard, Cleric, Druid, Fighter, Illusionist, Knight, Magic User, Monk, Paladin, Ranger, Sage, Samurai, Thief, Valkyrie, Viking, Witch, and many others.

### Example Usage
```cpp
#include "cls.h"

int main() {
    const Cls& ranger = getRanger();
    std::cout << "Class: " << ranger.getName() << std::endl;
    return 0;
}
```

## Alignment System

The `alignment.cpp` module allows for flexible character alignments, essential for role-playing depth.

### Key Features
- Alignment enum for easy use
- Randomized alignment assignment

### Example Usage
```cpp
#include "alignment.hpp"

int main() {
    Alignment alignment = rollRandomAlignment();
    std::cout << "Random Alignment assigned." << std::endl;
    return 0;
}
```

## Planned Enhancements
- Comprehensive spell point system
- Advanced leveling mechanics
- Expanded combat features
- Detailed Player class for full integration
- Improved unit test coverage

## Contribution Guidelines
Contributions are welcomed! Please follow these guidelines:
- Clearly document your changes
- Include tests when possible
- Maintain code readability and consistency

## Credits
- **Judges Guild Wilderlands of High Fantasy:** Inspiration for races and classes
- **Judges Guild Book of Names:** Source for character naming conventions

## Author
- **Robert Bledsaw III** - [rbledsaw3](https://github.com/rbledsaw3) [d00d4d](https://x.com/d00_d4d)

