#include <iostream>

extern int array_sum(int[], int);

int main(){
    int array[5] = {1,2,3,4,6};
    std::cout << array_sum(array,5) << std::endl;
    return 0;
}