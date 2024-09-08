#include "Gradebook.h"

Gradebook::Gradebook() : Gradebook(10) {}

Gradebook::Gradebook(int max_size) : max_size(max_size), current_size(0) {
  grades = new Grade[max_size];
}

Gradebook::~Gradebook() {delete[] grades;}

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment,
                         int value) {
  if (current_size < max_size) {
    grades[current_size] = Grade(stud_id, course_id, assignment, value);
  }
  current_size++;
}

Grade* Gradebook::get_grades() { return grades; }
