#include <iostream>

using namespace std;

extern int sum_diagonal(int[4][4]);

int main(){
    int matrix[4][4] = {{1,2,3,4},{5,1,7,8},{5,4,1,6},{6,1,3,1}};

    cout << sum_diagonal(matrix) << endl;
}