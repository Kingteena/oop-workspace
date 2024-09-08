#include "University.h"

University::University() : University("", "") {}

University::University(std::string name, std::string location)
    : University(name, location, 10) {}

University::University(std::string name, std::string location, int max_courses)
    : name(name), location(location), num_courses(0), max_courses(max_courses) {
  gradebook = Gradebook();
  courses = new Course[max_courses];
}

University::~University() { delete[] courses; }

void University::addCourse(int id, std::string name) {
    if (num_courses < max_courses)
    {
        courses[num_courses] = Course(name, id);
        num_courses++;
    }
    
}

std::string University::get_name() { return name; }

std::string University::get_location() { return location; }

Course* University::get_courses() { return courses; }

Gradebook University::get_gradebook() { return gradebook; }
