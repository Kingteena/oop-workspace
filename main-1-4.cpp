#include <iostream>

#include "Person.h"

using namespace std;

PersonList createPersonList(int n){
    PersonList person_list;

    person_list.numPeople = n;
    person_list.people = new Person[n];

    for (int i = 0; i < n; i++)
    {
        person_list.people[i].name = "Jane Doe";
        person_list.people[i].age = 1;
    }

    return person_list;
}

extern PersonList shallowCopyPersonList(PersonList);

int main() {
  int size = 6;

  PersonList list = createPersonList(size), copy = shallowCopyPersonList(list);

  list.people[0].age = 34;
  list.people[0].name = "Paul Atredies";

  cout << list.numPeople << " | " << copy.numPeople << endl;

  for (int i = 0; i < size; i++) {
    cout << list.people[i].age << " " << list.people[i].name << " | "
         << copy.people[i].age << " " << copy.people[i].name << endl;
  }

  return 0;
}
