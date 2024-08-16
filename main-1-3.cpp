#include <iostream>

#include "Person.h"

using namespace std;

extern PersonList createPersonList(int);
extern PersonList deepCopyPersonList(PersonList);

int main() {
  int size = 6;

  PersonList list = createPersonList(size), copy = deepCopyPersonList(list);

  list.people[0].age = 34;
  list.people[0].name = "Paul Atredies";

  cout << list.numPeople << " | " << copy.numPeople << endl;

  for (int i = 0; i < size; i++) {
    cout << list.people[i].age << " " << list.people[i].name << " | "
         << copy.people[i].age << " " << copy.people[i].name << endl;
  }

  return 0;
}
