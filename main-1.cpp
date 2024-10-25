#include <iostream>

#include "GridItem.hpp"
#include "Helper.hpp"

using namespace std;

int GridItem::count = 0;

int main() {
  GridItem item1 = GridItem(), item2 = GridItem(2, 3, 5, 5);
  int x, y;

  cout << "Getting details of item1" << endl;
  cout << "Count: " << item1.getActiveGridItemCount() << endl;
  tie(x, y) = item1.getCoordinates();
  cout << "Pos: (" << x << "," << y << ")" << endl;
  cout << "Height: " << item1.getGridHeight() << endl;
  cout << "Width: " << item1.getGridWidth() << endl;
  cout << endl;
  cout << "Getting details of item2" << endl;
  cout << "Count: " << item2.getActiveGridItemCount() << endl;
  tie(x, y) = item2.getCoordinates();
  cout << "Pos: (" << x << "," << y << ")" << endl;
  cout << "Height: " << item2.getGridHeight() << endl;
  cout << "Width: " << item2.getGridWidth() << endl
       << endl
       << "Calculating distance: "
       << Helper::absoluteSquaredDistance(item1.getCoordinates(),
                                          item2.getCoordinates())
       << endl

       << endl
       << "destroying one item" << endl;
  item1.~GridItem();
  cout << "Count: " << item2.getActiveGridItemCount() << endl;
  return 0;
}