#include <iostream>

extern double arrayMin(double*, int);

using namespace std;

int main(){
    double array[] = {5.0,3.1,-3.2};

    cout << arrayMin(array, 3) << endl;
}