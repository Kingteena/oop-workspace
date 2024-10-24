#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

using namespace std;

class Game {
 private:
  vector<GameEntity*> entities;

 public:
  Game() {}

  vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                               int gridHeight) {
    GameEntity* entity_ptr;
    for (int i = 0; i < numShips; i++) {
      int x, y;
      tie(x, y) = Utils::generateRandomPos(gridWidth, gridHeight);
      entity_ptr = new Ship(x, y);
      entities.push_back(entity_ptr);
    }

    for (int i = 0; i < numMines; i++) {
      int x, y;
      tie(x, y) = Utils::generateRandomPos(gridWidth, gridHeight);

      entity_ptr = new Mine(x, y);
      entities.push_back(entity_ptr);
    }
    return entities;
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    int iteration = 0;
    bool gameOver = false;
    Ship* ship_ptr;
    vector<Ship> ship_vector;
    vector<Mine> mine_vector;
    Mine* mine_ptr;
    cout << "HERE LOOP";
    while ((iteration < maxIterations) and !gameOver) {
      for (GameEntity* entity_ptr : entities) {
        if (entity_ptr->getType() == GameEntity::ShipType) {
          ship_ptr = (Ship*)entity_ptr;
          ship_ptr->move(1, 0);
          ship_vector.push_back(*ship_ptr);
        } else if (entity_ptr->getType() == GameEntity::MineType) {
          mine_ptr = (Mine*)entity_ptr;
          mine_vector.push_back(*mine_ptr);
        }
      }

      if (ship_vector.size() == 0) {
        gameOver = true;
      }

      double distance;
      Explosion explosion;
      for (Mine mine : mine_vector) {
        for (Ship ship : ship_vector) {
          distance = Utils::calculateDistance(ship.getPos(), mine.getPos());
          if (distance <= mineDistanceThreshold) {
            explosion = mine.explode();
            explosion.apply(ship);
          }
        }
      }

      iteration++;
    }
  }

  vector<GameEntity*> getEntities() { return entities; }
  void setEntities(vector<GameEntity*> entities) { this->entities = entities; }

  ~Game() {
    cout << "ISA HAPPENING";
    for (GameEntity* entity : entities) {
      delete entity;
    };
  }
};

#endif