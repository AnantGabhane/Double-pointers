#include <iostream>
using namespace std;

void pointer_vs_reference(){
    int num1 = 20, 
    num2 = 23;
    
    int* ptr1 = &num1;
    cout << *ptr1 << endl; // 20 
    
    *ptr1 = 26;
    cout << *ptr1 << endl; // 26 
    
    ptr1 = &num2;
    cout << *ptr1 << endl; // 23
    
    int& ref1 = num1;
    cout << ref1 << endl; // 26 
    
    ref1 = 18;
    cout << ref1 << endl; // 18
}

int main(){
    pointer_vs_reference();
    return 0;
}