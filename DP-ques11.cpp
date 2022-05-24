#include <iostream>
using namespace std;

int f(int x, int *y, int **z) {
    int p , q;
    **z += 1;
    q = **z;
    *y +=2;
    p = *y;
    x+=3;
    return x+p+q;
}

int main(){
    int c, *b , **a;
    c=4;
    b = &c;
    a = &b;
    cout << f(c,b,a);
    return 0;
}

/*

function returns 19 as a sum 0f all x+p+q

3 blocks are created 
block 1 -> address contained 96 (a,z) address has 92
block 2 -> address contained 100 (b,y) address has 96
block 3 -> value contained 4 (c,x) address has 100
*/ 