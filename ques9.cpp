#include <iostream>
using namespace std;

int main(){
    char s[] = "HELLO";
    char *p = s;
    cout << s[0] << p[0];
    //output :  HH 
    return 0;    
}