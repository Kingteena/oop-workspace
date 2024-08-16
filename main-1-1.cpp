#include "Person.h"
#include <iostream>

using namespace std;

extern Person* createPersonArray(int);

int main(){
    int size = 6;

    Person *array = createPersonArray(size);

    for (int i = 0; i < size; i++){
        cout << array[i].age << " " << array[i].name << endl;
    }

    return 0;
}
