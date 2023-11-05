# RPG Character Generation Framework

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/f754cd07f6a94f59bef63fcd6b241a11)](https://app.codacy.com/gh/rbledsaw3/CharGen/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade)

This framework enables easy generation of races, classes, and PC/NPCs.

# Table of Contents
1.  [RPG Character Generation Framework](#rpg-character-generation-framework)
2.  [Dice Rolling Mechanism](#dice-rolling-mechanism)
   -   [Features](#features)
   -   [Usage](#usage)
3.  [Character Stats](#character-stats)
   -   [Features](#features-1)
   -   [Implementation Details](#implementation-details)
   -   [Usage Example](#usage-example)
4.  [Sex and Gender Attributes](#sex-and-gender-attributes)
   -   [Features](#features-2)
   -   [Implementation Details](#implementation-details-1)
   -   [Random Name Generation Logic](#random-name-generation-logic)
   -   [Usage Example](#usage-example-1)
5.  [Race Attributes and Preferences](#race-attributes-and-preferences)
   -   [Features](#features-3)
   -   [Available Races and Their Attributes](#available-races-and-their-attributes)
   -   [Usage](#usage-1)
6.  [Class System](#class-system)
   -   [Classes Defined](#classes-defined)
   -   [Class Attributes](#class-attributes)
   -   [Getting Started](#getting-started)
7.  [TODO](#todo)
8.  [Contribution](#contribution)
9.  [Author](#author)

## Dice Rolling Mechanism

The `roll.cpp` module is responsible for simulating dice rolls, a fundamental mechanism in RPG systems for determining the outcomes of various actions, such as combat, skill checks, and more.

### Features

-   **Robust Error Handling:** The roll function ensures that the number of dice (`diceQty`) cannot be less than 1 and the number of sides on a die (`diceSides`) cannot be less than 2. If invalid inputs are provided, the system defaults to the minimum valid values and logs an error message.
-   **Randomization:** Utilizes `std::random_device` and `std::uniform_int_distribution` to generate unbiased results for each die rolled.

### Usage

To roll dice using this system, include the `roll.h` header in your file and use the `roll` function as shown below:

```cpp
#include "roll.h"

int main() {
    // Roll three six-sided dice
    int result = roll(3, 6);
    std::cout << "Result of rolling 3d6: " << result << std::endl;

    // Roll with invalid values, to see error handling
    result = roll(0, 1); // This will default to rolling 1d2
    std::cout << "Result of rolling with default correction: " << result << std::endl;

    return 0;
}
```

## Character Stats

The `stats.cpp` module provides the `Stats` class, which models the fundamental attributes of a character in the RPG system. These attributes influence various aspects of gameplay, such as combat effectiveness, skill checks, and interactions.

### Features

-   **Attribute Management:** The class encapsulates six core character attributes: strength, dexterity, constitution, intelligence, wisdom, and charisma.
-   **Default and Custom Constructors:** Allows for the creation of `Stats` objects with default values or specified attribute scores.
-   **Getters and Setters:** Methods to retrieve and modify individual attribute values.
-   **Stat Rolling:** Includes functions for generating random attribute scores following classic RPG dice roll conventions.
-   **Stat Modifiers:** Methods to add or subtract attribute score modifiers.
-   **Stream Overloading:** Overloads the output stream operator to facilitate the printing of attribute scores.

### Implementation Details

The `Stats` class provides the following public methods:

-   Constructors for initializing `Stats` objects with default or specific attribute values.
-   `getStrength()`, `getDexterity()`, `getConstitution()`, `getIntelligence()`, `getWisdom()`, `getCharisma()` for accessing individual attributes.
-   `setStrength()`, `setDexterity()`, `setConstitution()`, `setIntelligence()`, `setWisdom()`, `setCharisma()` for modifying individual attributes.
-   `setStats()` to set all attributes at once, either directly or by copying from another `Stats` object.
-   `addStats()` and `subtractStats()` to apply modifiers to attributes.
-   `rolledStats()` functions to generate random attributes, optionally adding or copying bonuses.

### Usage Example

```cpp
#include "stats.h"

int main() {
    // Create a Stats object with default attribute scores
    Stats defaultStats;
    
    // Create a Stats object with custom attribute scores
    Stats customStats(15, 14, 13, 12, 10, 8);
    
    // Roll random attribute scores
    Stats randomStats = rolledStats();
    
    // Output the attributes
    std::cout << randomStats;
    
    return 0;
}
```

## Sex and Gender Attributes

The `sex.cpp` module introduces the `Sex` class which encapsulates the concept of sex and gender within the RPG system, providing additional layers to character creation with specific attributes tied to each gender.

### Features

-   **Sex and Gender Representation:** Represents the sex and gender of a character, including associated names and attribute bonuses.
-   **Random Name Generation:** Able to generate random names based on gender. Names are taken from Judges Guild's Book of Names with some additions.
-   **Attribute Bonuses:** Each gender has unique attribute bonuses that may affect gameplay. Older versions of D&D would do this but modern games don't. You can add or remove, like anything else, to fit your game/campaign/style.

### Implementation Details

The `Sex` class defines the following methods:

-   `getName()`: Retrieves the name associated with the sex object.
-   `getGender()`: Retrieves the gender associated with the sex object.
-   `getBonuses()`: Retrieves the attribute bonuses associated with the sex object.
-   `rollRandomName()`: Static method that generates a random name, assigning predefined gender-based bonuses.
-   `rollRandomName(const std::string& gender)`: Overloaded static method that generates a random name based on the provided gender string.

### Random Name Generation Logic

-   **Male Names:** If the `roll` function returns `1`, it picks a name from the male names array and assigns bonuses typically associated with male characters.
-   **Female Names:** If the `roll` function returns `2`, it selects a name from the female names array and assigns bonuses typically associated with female characters.

### Usage Example

```cpp
#include "sex.h"

int main() {
    // Randomly generate a sex object with a name and associated bonuses
    Sex randomSex = Sex::rollRandomName();
    std::cout << randomSex;
    return 0;
}
```

## Race Attributes and Preferences

The `races.cpp` module defines the `Race` class, which encapsulates the attributes and preferred classes of each race in the RPG system.

### Features

-   **Race Attributes:** Each race has a set of statistical bonuses that affect character abilities.
-   **Preferred Classes:** Some races have preferences for certain classes, which can guide players during character creation.

### Available Races and Their Attributes

Below is a list of races from the Wilderlands of High Fantasy Campaign Setting along with their statistical bonuses and preferred classes:

-   **Astari:** Bonuses: STR -2, DEX +2, INT +2, WIS -2. Preferred Classes: Magic User, Thief.
-   **Bardik:** Bonuses: STR -2, CHA +4. Preferred Classes: Bard, Witch.
-   **Confed:** Bonuses: CON +2, WIS +2. Preferred Classes: None.
-   **Demi-Giant:** Bonuses: STR +8, CHA -2, WIS +4. Preferred Classes: Barbarian, Cleric.
-   **Dwarf:** Bonuses: WIS +2. Preferred Classes: Fighter.
-   **Elf:** Bonuses: INT +2. Preferred Classes: Magic User.
-   **Ghuls:** Bonuses: STR +2. Preferred Classes: Fighter.
-   **Gnome:** Bonuses: WIS +2. Preferred Classes: Illusionist.
-   **Half-Elf:** Bonuses: INT +1, WIS -1. Preferred Classes: None.
-   **Half-Orc:** Bonuses: STR +2. Preferred Classes: Barbarian.
-   **Halfling:** Bonuses: INT +2. Preferred Classes: Thief.
-   **Human:** Bonuses: None. Preferred Classes: None.
-   **Lunari:** Bonuses: DEX +2, CON +2, INT +2. Preferred Classes: Sage, Magic User, Druid.
-   **Orc:** Bonuses: STR +4. Preferred Classes: Barbarian.
-   **Solari:** Bonuses: STR +2, CON +2, CHA +2. Preferred Classes: Fighter, Paladin, Cleric.
-   **Swertling:** Preferred Classes: Barbarian, Cleric.

### Usage

To use the `Race` class, include the `races.h` header in your implementation file and instantiate a `Race` object with the desired attributes. You can then access the race's name, bonuses, and preferred classes through its getter methods.

```cpp
#include "races.h"

int main() {
    Race human("Human", {0, 0, 0, 0, 0, 0}, {});
    std::cout << "Race: " << human.getName() << std::endl;
    // Output additional race information as needed
    return 0;
}
```

## Class System

This module defines the `Cls` class, which represents different character classes in a role-playing game (RPG). Each class has a name, minimum statistics (`Stats`), and a hit die value that represents the health potential of characters belonging to that class.

### Classes Defined

The system currently defines the following character classes, each with unique minimum stat requirements and hit die values:

-   Alchemist
-   Amazon
-   Animal Trainer
-   Assassin
-   Barbarian
-   Bard
-   Beggar
-   Berzerker
-   Bounty Hunter
-   Cleric
-   Druid
-   Fighter
-   Illusionist
-   Knight
-   Magic User
-   Monk
-   Paladin
-   Ranger
-   Sage
-   Samurai
-   Thief
-   Valkyrie
-   Viking
-   Witch

### Class Attributes

Each class is instantiated with the following attributes:

-   `name`: The name of the class.
-   `minStats`: An instance of `Stats` that sets minimum attribute requirements.
-   `hitDie`: An integer value representing the hit points dice used for the class.

For example, the `Cleric` class has balanced stats across the board with a `minStats` value of `{9, 9, 9, 9, 9, 9}` and a hit die value of `8`.

### Getting Started

To utilize the class system in your application, include the `cls.h` header file and instantiate a `Cls` object with the desired class.

```cpp
#include "cls.h"

// Instantiate a class object
Cls myClass = Cls::Cleric;
```

## TODO

-   Add spell points once magic system is in place
-   Add Leveling System
-   Add attack stats for successful hits
-   Add number of attacks per level
-   Add a Player Class to create Player Objects that can tie it all together
-   MOAR TESTS mainly to ensure stat modification is happening as expected without stats underflowing (below 3 or 0, whatever works for your game)

## Contribution

-   Judges Guild Wilderlands of High Fantasy: for races and Classes
-   Judges Guild Book of Names: for a starting list of names

## Author

* **Robert Bledsaw III** - *Initial work* - [rbledsaw3](https://github.com/rbledsaw3) [d00d4d](https://x.com/d00_d4d)
