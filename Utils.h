#ifndef UTILS_H
#define UTILS_H

#include <stdlib.h>

#include <cmath>
#include <tuple>

class Utils {
 public:
  static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    return std::make_tuple(((double)std::rand() / RAND_MAX) * gridWidth,
                           ((double)std::rand() / RAND_MAX) * gridHeight);
  }

  static double calculateDistance(std::tuple<int, int> pos1,
                                  std::tuple<int, int> pos2) {
    int x_dif = std::get<0>(pos1) - std::get<0>(pos2);
    int y_dif = std::get<1>(pos1) - std::get<1>(pos2);
    return std::sqrt(pow(x_dif, 2) + pow(y_dif, 2));
  }
};

#endif