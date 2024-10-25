#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <tuple>

class GridItem {
 protected:
  int x, y, width, height;

 public:
  static int count;

  GridItem(int x, int y, int width, int height)
      : x(x), y(y), width(width), height(height) {
    count++;
  }
  GridItem() : GridItem(0, 0, 0, 0) {}

  void setCoordinates(int x, int y) {
    this->x = x;
    this->y = y;
  }

  std::tuple<int, int> getCoordinates() { return std::make_tuple(x, y); }

  int getGridWidth() { return width; }
  int getGridHeight() { return height; }

  int getActiveGridItemCount() {
    return count;
    return 0;
  }

  virtual ~GridItem() { count--; }
};

int GridItem::count = 0;

#endif