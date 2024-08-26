#ifndef WIZARD_H
#define WIZARD_H

#include "Player.h"

class Wizard : public Player {
 private:
  int mana;

 public:
  Wizard(std::string name, int health, int damage, int mana);
  void castSpell(Player* oponent);
  int getMana();
  void setMana(int mana);
};

#endif