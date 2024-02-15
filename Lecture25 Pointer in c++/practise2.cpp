#include <iostream>
using namespace std;
int main()
{ /*
 //int *p=0;
 //cout<<*p<<endl;
 int i=5;
 //int *p=&i;
 int *p=0;
 p=&i; //is same as int*p=&i;
 cout<<*p<<endl;
 cout<<p<<endl;*/

    int num = 5;
    cout << num << endl;
    int *p = &num;
    (*p)++;
    cout << num << endl;

    int *q = p;
    cout << p << "_" << q << endl;
    cout << *p << "_" << *q << endl;

    int i = 7;
    int *t = &i;
    *t = *t + 1;
    cout << *t << endl;
    cout << t << endl;
    t = t + 1;
    cout << t << endl;

    return 0;
}