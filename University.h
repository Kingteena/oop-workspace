#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>

#include "Course.h"
#include "Gradebook.h"

class University {
 private:
  std::string name;
  std::string location;
  Course* courses;
  Gradebook gradebook;
  int num_courses, max_courses;

 public:
  University();
  University(std::string name, std::string location);
University(std::string name, std::string location, int max_courses);
  ~University();

  void addCourse(int id, std::string name);

  std::string get_name();
  std::string get_location();
  Course* get_courses();
  Gradebook get_gradebook();
};

#endif