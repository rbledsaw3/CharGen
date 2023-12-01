#ifndef SRC_ALIGNMENT_HPP_
#define SRC_ALIGNMENT_HPP_

#include <array>
#include "roll.hpp"

constexpr std::size_t alignmentSize {9};

enum class Alignment {
  LAWFUL_GOOD,
  NEUTRAL_GOOD,
  CHAOTIC_GOOD,
  LAWFUL_NEUTRAL,
  NEUTRAL,
  CHAOTIC_NEUTRAL,
  LAWFUL_EVIL,
  NEUTRAL_EVIL,
  CHAOTIC_EVIL
};

constexpr std::array<Alignment, alignmentSize> alignments = {
  Alignment::LAWFUL_GOOD,
  Alignment::NEUTRAL_GOOD,
  Alignment::CHAOTIC_GOOD,
  Alignment::LAWFUL_NEUTRAL,
  Alignment::NEUTRAL,
  Alignment::CHAOTIC_NEUTRAL,
  Alignment::LAWFUL_EVIL,
  Alignment::NEUTRAL_EVIL,
  Alignment::CHAOTIC_EVIL
};

Alignment getAlignmentByIndex(const int& index);

Alignment rollRandomAlignment();

#endif  // SRC_ALIGNMENT_HPP_
