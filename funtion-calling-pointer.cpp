#include <iostream>
using namespace std;

void fun1(int** q){
    q = q+1;
}

void fun2(int** q){
    *q = *q+1;
}

void fun3(int** q){
    **q = **q+1;
}

int main(){
    int a =5;
    int* p = &a;
    int** q = &p;

    cout << "Before " << q << endl;
    cout << "Before " << *q << endl;
    cout << "Before " << **q << endl;

    fun1(q);
    cout << "after " << q << endl;
    cout << "after " << *q << endl;
    cout << "after " << **q << endl;    

cout << "---------------" <<endl;

    cout << "Before " << q << endl;
    cout << "Before " << *q << endl;
    cout << "Before " << **q << endl;

    fun2(q);
    cout << "after " << q << endl;
    cout << "after " << *q << endl;
    cout << "after " << **q << endl;  

cout << "---------------" <<endl;

    cout << "Before " << q << endl;
    cout << "Before " << *q << endl;
    cout << "Before " << **q << endl;

    fun3(q);
    cout << "after " << q << endl;
    cout << "after " << *q << endl;
    cout << "after " << **q << endl;

    return 0;
}


/*

Before 0x87759ffad8
Before 0x87759ffae4
Before 5

after 0x87759ffad8
after 0x87759ffae4
after 5
---------------
Before 0x87759ffad8
Before 0x87759ffae4
Before 5

after 0x87759ffad8
after 0x87759ffae8
after 1973418712
---------------
Before 0x87759ffad8
Before 0x87759ffae8
Before 1973418712

after 0x87759ffad9
after 0xf000000087759ffa
after

*/