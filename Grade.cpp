#include "Grade.h"

Grade::Grade() : Grade(0, 0, "", 0) {}

Grade::Grade(int student_id, int course_id, std::string assignment, int value)
    : student_id(student_id),
      course_id(course_id),
      value(value),
      assignment(assignment) {}

int Grade::get_value() { return value; }
