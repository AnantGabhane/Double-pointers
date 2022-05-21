#include <iostream>
using namespace std;

int main(){
    int *ptr = 0; // null 
    int a = 10; 
    *ptr = a;
    cout << *ptr  << endl;

    return 0;
}

// prints nothing as it is not pointing to any address 