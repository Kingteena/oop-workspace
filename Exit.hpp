#ifndef EXIT_HPP
#define EXIT_HPP

#include "Explorer.hpp"
#include "Helper.hpp"
#include "Interactable.hpp"

class Exit : public Interactable {
 private:
  /* data */
 public:
  Exit(int width, int height)
      : Interactable(width - 1, height - 1, width, height) {}

  bool interact(Explorer* player) {
    return (Helper::absoluteSquaredDistance(player->getCoordinates(),
                                            {x, y}) == 0);
  }

  InteractableType getType() { return InteractableType::EXIT; }
};

#endif