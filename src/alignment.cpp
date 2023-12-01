#include "alignment.hpp"

Alignment getAlignmentByIndex(const int& index) {
  std::size_t safeIndex = index % alignmentSize;
  if (safeIndex < 0) {
    safeIndex += alignmentSize;
  }
  try {
    return alignments.at(safeIndex);
  } catch (const std::out_of_range& e) {
    std::cerr << "Out of range error: " << e.what() << '\n';
    return alignments.at(0);
  }
}

Alignment rollRandomAlignment() {
  return getAlignmentByIndex(roll(DiceQty(1), DiceSides(alignmentSize)));
}

// TODO(rbledsaw3): Add morality and ethics
