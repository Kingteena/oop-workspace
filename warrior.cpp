#include "warrior.h"

#include <iostream>

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

std::string Warrior::getWeapon() { return weapon; }

void Warrior::setWeapon(std::string weapon) { this->weapon = weapon; }

void Warrior::swingWeapon(Player* opponent) {
  std::cout << name << " swings their " << weapon << " at "
            << opponent->getName() << "!\n";
  opponent->takeDamage(getDamage());
}
