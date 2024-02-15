#include <iostream>
using namespace std;
void update(int **p)
{

    p = p + 1;
    cout << "value of p is " << p << endl;
    *p = *p + 1;
    cout << "value of *p is" << *p << endl;
    **p = **p + 1;
    cout << "value of **p is " << **p << endl;
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout << "adress of i is " << &i << endl;
    cout << "value of p is " << p << endl;
    cout << "value of *p is " << *p << endl;
    cout << "value of p2 is " << p2 << endl;     // points to the p adress
    cout << "value of *p2 is " << *p2 << endl;   // points to the i adress
    cout << "value of **p2 is " << **p2 << endl; // it can access the i
    cout << "value of *p2 and p is must be same as" << *p2 << " and " << p << endl;
    update(p2);
    return 0;
}