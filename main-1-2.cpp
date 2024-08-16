#include <iostream>

#include "Person.h"

using namespace std;

extern PersonList createPersonList(int);

int main() {
  int size = 6;

  PersonList list = createPersonList(size);
  cout << list.numPeople << endl;

  for (int i = 0; i < size; i++) {
    cout << list.people[i].age << " " << list.people[i].name << endl;
  }

  return 0;
}
