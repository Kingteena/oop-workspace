#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

class GameEntity {
 public:
  enum GameEntityType { ExplosionType, MineType, NoneType, ShipType };

  GameEntity(int x, int y, char type) {
    position = std::make_tuple(x, y);
    this->type = static_cast<GameEntityType>(type);
  }

  std::tuple<int, int> getPos() { return position; }
  GameEntityType getType() { return type; }

  void setPos(std::tuple<int, int> pos) { position = pos; }
  void setType(GameEntityType type) { this->type = type; }

 protected:
  std::tuple<int, int> position;
  GameEntityType type;
};

#endif