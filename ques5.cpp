#include <iostream>
using namespace std;

int main(){
    int a = 7;
    int *c = &a;
    c = c+1;
    cout << a << " " << *c << endl;

    return 0;
}

//  7 1954543544
// value of a and garbage value as c is pointing to 104 which is ouside the scope of array