#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    cout << arr << endl;
    cout << arr+1 << endl; // 4 byte agge bad jayega 

    cout << &arr << endl;
    cout << &arr+1 << endl; // skip the entire array of n element and move forward by size of the array 
    return 0;
}