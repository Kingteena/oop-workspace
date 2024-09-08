#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Grade.h"

class Gradebook {
    private:
    int max_size, current_size;
    Grade* grades;
    public:
    Gradebook();
    Gradebook(int max_size);
    ~Gradebook();

    void addGrade(int stud_id, int course_id, std::string assignment, int value);
    Grade* get_grades();
};

#endif