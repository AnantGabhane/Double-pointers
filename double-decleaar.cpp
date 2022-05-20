#include <iostream>
using namespace std;

int main(){
    int a =5;
    int* p = &a;
    int** q = &p;

    cout << &a << endl;
    cout << a << endl;

    cout << &p << endl;
    cout << p << endl;
    cout << *p << endl;

    cout << &q << endl;
    cout << q << endl;
    cout << *q << endl; 
    cout << **q <<   endl;   
    return 0;
}

/*

0x6d57ff6fc &a
5           a
------
0x6d57ff6f0 &p
0x6d57ff6fc p
5           *p
------
0x6d57ff6e8  &q
0x6d57ff6f0  q 
0x6d57ff6fc   *q 
5             **q

*/