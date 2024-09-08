#ifndef COURSE_H
#define COURSE_H

#include <string>

#include "Person.h"

class Course {
 private:
  std::string name;
  int id, current_num_people, max_people;
  Person** persons;
 public:
  Course();
  Course(std::string name, int id);
  Course(std::string name, int id, int max_people);
  ~Course();

  std::string get_name();
  int get_id();
  Person** get_persons();

  void addPerson(Person* p);
};

#endif