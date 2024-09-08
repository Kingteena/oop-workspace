#include "Student.h"

Student::Student() : Student("", 0) {}

Student::Student(std::string name, int id) : Person(name), id(id) {}

int Student::get_id() { return id; }
