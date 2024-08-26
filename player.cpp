#include "player.h"

#include <iostream>

Player::Player(std::string name, int health, int damage)
    : name(name), health(health), damage(damage) {}

int Player::getDamage() { return damage; }

int Player::getHealth() { return health; }

std::string Player::getName() { return name; }

void Player::setDamage(int damage) { this->damage = damage; }

void Player::setHealth(int health) { this->health = health; }

void Player::setName(std::string name) { this->name = name; }

void Player::attack(Player* opponent, int damage) {
  opponent->takeDamage(damage);
}

void Player::takeDamage(int damage) {
  health -= damage;
  std::cout << name << " takes " << damage
            << " damage. Remaining health: " << health << "\n";
}

Player::~Player() {}
