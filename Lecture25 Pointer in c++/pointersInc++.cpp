#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    
    
    
    cout << num << endl;
    cout << "adress of num is " << &num << endl;
    int *ptr = &num;


    cout << "value of num is : " << *ptr << endl;
    cout << "adress is :" << ptr << endl;
    
    
    double d = 4.2;
    double *p = &d;
    
    
    cout << "value in the block of d is " << *p << endl;
    cout << "value of the adress of d block is :" << p << endl;

    cout << "size of integer is " << sizeof(num)<<endl;
    cout << "size of pointer is" << sizeof(ptr)<<endl; 
    cout << "size of pointer is" << sizeof(p)<<endl; 

    return 0;
}