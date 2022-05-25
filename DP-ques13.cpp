#include <iostream>
using namespace std;

void increment(int** p){
    (**p)++;
}

int main(){
    int num = 10;
    int *ptr  = &num;
    increment(&ptr);
    cout << num << endl;
    return 0;
}

// 11 is printed at terminal 
// **p points to *ptr which points to num as increment function is called
//value at num is incremented by 1 