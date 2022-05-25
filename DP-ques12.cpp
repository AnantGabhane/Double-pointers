#include <iostream>
using namespace std;

int main(){
    int ***r, **q , *p , i = 8;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    cout << *p << " " << **q << " " << ***r<< " "  << endl;
    return 0;
}

// 10 10 10

// all are pointing to one address place so at
// first value is 8 then its incremented by  at line 7 (*p)++
// it becomes 9 now
// again at line 9 its incremented by 1 as (**q)++ 
// it becomes 10
// as all the pointers are pointing at one place that is i all prints value as 10