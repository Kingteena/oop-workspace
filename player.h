#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
 protected:
  std::string name;
  int health, damage;

 public:
  Player(std::string name, int health, int damage);

  int getHealth(), getDamage();
  std::string getName();

  void setHealth(int health), setDamage(int damage),
      setName(std::string name);

  void attack(Player* opponent, int damage);
  void takeDamage(int damage);

  ~Player();
};



#endif