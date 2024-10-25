#ifndef PIT_HPP
#define PIT_HPP

#include "Helper.hpp"
#include "Interactable.hpp"

class Pit : public Interactable {
 private:
  bool covered;

 public:
  Pit(int x, int y, int width, int height)
      : Interactable(x, y, width, height) {}

  bool interact(Explorer* player) {
    if ((Helper::absoluteSquaredDistance(player->getCoordinates(), {x, y})) and
        (!covered)) {
      covered = true;
      if (player->getStamina() == 0) {
        return true;
      } else {
        return false;
      }
    }
    player->jumpPit();
    return false;
  }

  InteractableType getType() { return InteractableType::PIT; }

  ~Pit() {}
};

#endif