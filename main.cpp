#include "University.h"
#include "Student.h"

#include <iostream>

int main(){

    University uni = University("The University of Adelaide", "Adelaide");

    uni.addCourse(1, "OOP");
    
    Student student = Student("Me", 6211);

    uni.get_courses()->addPerson(&student);

    uni.get_gradebook().addGrade(6211, 1, "Workshop 8", 1);

    return 0;
}