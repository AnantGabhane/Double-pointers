#include <iostream>
using namespace std;

    class complex {
    private:
        int a, b;
    public:
        complex(int x, int y)
{
    a = x;
    b = y;
}

complex(const complex& c){
    a = c.a;
    b = c.b;
}

void printData(){
    cout << "a = " << a << endl;
    cout << "b = " << b;
}
};

int main(){
    complex c1(5, 10);
    complex c2(c1);
    c2.printData();
}

/*
output:

a = 5
b = 10
*/