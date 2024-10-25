#ifndef INTRACTABLE_HPP
#define INTRACTABLE_HPP

#include "Explorer.hpp"
#include "GridItem.hpp"

enum InteractableType { EXIT, PIT };

class Interactable : public GridItem {
 public:
  static int count;

  Interactable(int x, int y, int width, int height)
      : GridItem(x, y, width, height) {
    Interactable::count++;
  }

  Interactable() : GridItem() {}

  virtual bool interact(Explorer* player) = 0;
  virtual InteractableType getType() = 0;

  static int getActiveInteractableCount() { return Interactable::count; }

  ~Interactable() { Interactable::count--; }
};
int Interactable::count = 0;
#endif