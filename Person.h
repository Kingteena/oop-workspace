#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
private:
    std::string name;
public:
    Person();
    Person(std:: string name);

    std::string getName();
    void setName(std::string name);
};



#endif