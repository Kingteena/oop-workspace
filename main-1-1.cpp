#include <iostream>
#include <string>

#include "Asset.h"

using namespace std;

int main() {
  Asset asset1 = Asset(), asset2 = Asset(3, "bricks");

  cout << "Asset 1 \nvalue: " << asset1.get_value()
       << "\ntype: " << asset1.get_product_type() << endl
       << endl;
  cout << "Asset 2 \nvalue: " << asset2.get_value()
       << "\ntype: " << asset2.get_product_type() << endl
       << endl;
}