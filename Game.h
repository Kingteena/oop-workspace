#ifndef GAME_H
#define GAME_H

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
    for (int i = 0; i < numShips; i++) {
      int x, y;
      tie(x, y) = Utils::generateRandomPos(gridWidth, gridHeight);
      Ship* ship_ptr = new Ship(x, y);
      entities.push_back(ship_ptr);
    }

    for (int i = 0; i < numMines; i++) {
      int x, y;
      tie(x, y) = Utils::generateRandomPos(gridWidth, gridHeight);
      Mine* mine_ptr = new Mine(x, y);
      entities.push_back(mine_ptr);
    }
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    int iteration = 0;
    bool gameOver = false;
    while((iteration < maxIterations) and !gameOver){
        for (GameEntity* entity_ptr : entities)
        {
            if (entity_ptr->getType() == GameEntity::ShipType)
            {
            }
            
        }
        
        iteration++;
    }
  }

  vector<GameEntity*> getEntities() { return entities; }
  void setEntities(vector<GameEntity*> entities) { this->entities = entities; }

  ~Game() {
    for (GameEntity* entity : entities) {
      delete entity;
    };
  }
};

#endif