#ifndef MINE_H
#define MINE_H

#include <vector>

#include "Explosion.h"
#include "GameEntity.h"

class Mine : public GameEntity {
 public:
  Mine(int x, int y) : GameEntity(x, y, GameEntity::MineType) {}
  
  Explosion explode() {
    type = NoneType;
    return Explosion(std::get<0>(position), std::get<1>(position));
  }
};

#endif