#include "Course.h"

Course::Course() : Course("", 0) {}

Course::Course(std::string name, int id) : Course(name, id, 20) {}

Course::Course(std::string name, int id, int max_people)
    : name(name), id(id), max_people(max_people) {
  current_num_people = 0;
  persons = new Person*[max_people];
}

Course::~Course() { delete[] persons; }

std::string Course::get_name() { return name; }

int Course::get_id() { return id; }

Person** Course::get_persons() { return persons; }

void Course::addPerson(Person* p) {
    if (current_num_people < max_people)
    {
        persons[current_num_people] = p;
        current_num_people++;
    }
}
