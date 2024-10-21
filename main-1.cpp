#include <iostream>

#include "Utils.h"

using namespace std;

int main() {
  int ITERATIONS = 5, grid_width = 10, grid_height = 20;
  for (int i = 0; i < ITERATIONS; i++) {
    tuple<int, int> pos1, pos2;
    pos1 = Utils::generateRandomPos(grid_width, grid_height);
    pos2 = Utils::generateRandomPos(grid_width, grid_height);

    cout << "pos1: (" << get<0>(pos1) << "," << get<1>(pos1) << ")" << endl;
    cout << "pos2: (" << get<0>(pos2) << "," << get<1>(pos2) << ")" << endl;
    cout << "Distance: " << Utils::calculateDistance(pos1, pos2) << endl;

    cout << endl << endl;
  }

  return 0;
}