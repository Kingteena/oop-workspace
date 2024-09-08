#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
 private:
  int student_id, course_id, value;
  std::string assignment;

 public:
  Grade();
  Grade(int student_id, int course_id, std::string assignment, int value);

  int get_value();
};

#endif