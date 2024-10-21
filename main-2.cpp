#include <iostream>

#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"

using namespace std;

int main() {
  Ship my_ship(1, 2);
  cout << "Old ship Pos: (" << get<0>(my_ship.getPos()) << ","
       << get<1>(my_ship.getPos()) << ")" << endl;
  cout << my_ship.getType() << endl;
  my_ship.move(1, 2);
  cout << "New ship Pos: (" << get<0>(my_ship.getPos()) << ","
       << get<1>(my_ship.getPos()) << ")" << endl;
  cout << my_ship.getType() << endl;

  Mine my_mine(1, 5);
  cout << "Mine Pos: (" << get<0>(my_mine.getPos()) << ","
       << get<1>(my_mine.getPos()) << ")" << endl;
  cout << my_mine.getType() << endl;
  cout << "Exploding mine..." << endl;
  Explosion my_explosion = my_mine.explode();
  cout << "Mine Pos: (" << get<0>(my_mine.getPos()) << ","
       << get<1>(my_mine.getPos()) << ")" << endl;
  cout << my_mine.getType() << endl;

  my_explosion.apply(my_ship);

  cout << my_ship.getType() << endl;
}