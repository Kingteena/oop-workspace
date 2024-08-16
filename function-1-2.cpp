#include "Person.h"

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