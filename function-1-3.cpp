#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
  PersonList copy;

  copy.numPeople = pl.numPeople;
  copy.people = new Person[copy.numPeople];

  for (int i = 0; i < copy.numPeople; i++) {
    copy.people[i].age = pl.people[i].age;
    copy.people[i].name = pl.people[i].name;
  }

  return copy;
}