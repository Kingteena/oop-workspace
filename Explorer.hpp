#ifndef EXPLORER_HPP
#define EXPLORER_HPP

#include "GridItem.hpp"

class Explorer : public GridItem {
 private:
  int stamina;

 public:
  Explorer(int gridWidth, int gridHeight)
      : GridItem(0, 0, gridWidth, gridHeight), stamina(2) {}
  int getStamina() { return stamina; }

  void jumpPit() {  // decrements the stamina of the explorer. The explorer
                    // cannot have negative stamina

    if (stamina != 0) {
      stamina--;
    }
  }

  bool move(int xOffset, int yOffset) {
    if ((xOffset != 0) and (yOffset != 0)) {
      x += xOffset;
      y += yOffset;
      return true;
    } else {
      return false;
    }
  }
  ~Explorer();
};

#endif