#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"

class Instructor : public Person {
 public:
  Instructor();
  Instructor(std::string name);
};

#endif