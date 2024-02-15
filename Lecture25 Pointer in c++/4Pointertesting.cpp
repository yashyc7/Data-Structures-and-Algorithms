#include <iostream>
using namespace std;
int main()
{
    int num = 5;

    cout << num << endl;

    // address of opereator
    cout << &num << endl;

    int *p = &num;

    cout << "Adresss is : " << p << endl;

    cout << "Value is : " << *p + 1 << endl; // 5+1=6

    double d = 4.2;

    double *p2 = &d;

    cout << "Adresss is : " << p2 << endl;

    cout << "Value is : " << *p2 + 1 << endl;

    cout << "size of integer is " << sizeof(num) << endl;

    cout << "size of int pointer is " << sizeof(p) << endl;

    cout << "size of the double pointer is " << sizeof(p2) << endl;

    int *p3; // pointer to int is created and pointing to some garbage address so this is bad practise
    cout << *p3 << endl;

    int i = 5;
    int *ptr = 0;

    ptr = &i;

    cout << ptr << endl;
    cout << *ptr << endl;

    int *q = &i;

    cout << q << endl;
    cout << *q << endl;
    int num1 = 5;

    int *ptr2 = &num1;
    *ptr2++;
    cout << num1 << endl;

    int value = 6;
    int *pointer = &value;
    *pointer++;
    cout << value << endl;

    int *newpointer = pointer;
    cout << pointer << endl
         << newpointer << endl;
    cout << *pointer << endl
         << *newpointer << endl;
    // important concept
    int *t = &i;
    cout << (*t)++ << endl;
    *t = *t   + 1;
    cout << *t << endl;
    cout << t << endl;
    t = t + 1; // it becomes the 104 becuse pointer takes the 4bit space
    cout << t << endl;
    
    return 0;
}