#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <tuple>
#include <vector>

#include "Exit.hpp"
#include "Explorer.hpp"
#include "GridItem.hpp"
#include "Helper.hpp"
#include "Pit.hpp"

using namespace std;

enum GameState { WIN, LOSE, PLAYING };

class Game {
 private:
  int width, height;
  GameState starting_state;
  Explorer *explorer_ptr;
  Exit *exit_ptr;
  std::vector<GridItem *> items;

 public:
  Game(int width, int height, std::vector<std::tuple<int, int>> pitCoordinates)
      : width(width), height(height) {
    explorer_ptr = new Explorer(width, height);
    exit_ptr = new Exit(width, height);

    tuple<int, int> explorer_cords = {0, 0},
                    exit_cords = {width - 1, height - 1};

    Pit *pit_ptr;
    int x, y;
    for (std::tuple<int, int> new_pit_coords : pitCoordinates) {
      if ((new_pit_coords != explorer_cords) and
          (new_pit_coords != exit_cords)) {
        tie(x, y) = new_pit_coords;
        pit_ptr = new Pit(x, y, width, height);
        items.push_back(pit_ptr);
      }
    }
    starting_state = PLAYING;
  }

  bool displayState() {
    switch (starting_state) {
      case GameState::WIN:
        cout << "You win!" << endl;
        return true;
        break;
      case GameState::LOSE:
        cout << "You lose :(" << endl;
        return true;
        break;
      case GameState::PLAYING:
        cout << "Game on" << endl;
        return false;
        break;
      default:
        return false;
        break;
    }
  }
  ~Game();

  void movePlayer(int dx, int dy) {
    if (starting_state == GameState::PLAYING) {
      explorer_ptr->move(dx, 0);
      explorer_ptr->move(0, dy);
    }
  }
  void printGrid() {
    int x, y;
    tie(x, y) = explorer_ptr->getCoordinates();
    for (int i = 0; i < width; i++) {
      for (int j = 0; j < height; j++) {
        if ((i == x) and (j == y)) {
          cout << "P";
        } else if ((i == width - 1) and (j = height - 1)) {
          cout << "E";
        } else {
          cout << '_';
        }
      }
      cout << endl;
    }
  }
};

#endif