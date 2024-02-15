#include <iostream>
using namespace std;

class A
{
public:
    void fun1()
    {
        cout << "Inside the function 1" << endl;
    }
};
class D
{
public:
    void fun2()
    {

        cout << "Inside the function 2 " << endl;
    }
};
class C : public A, public D // multiple inheritance
{
public:
    void fun3()
    {
        cout << "Inside the function 3" << endl;
    }
};
class B : public A
{

public:
    void fun4()
    {

        cout << "Inside the function 4" << endl;
    }
};
int main()
{
    B b1;
    C c1;
    D d1;
    c1.fun1(); // calling the function of A
    c1.fun2(); // calling the function of A and D using heiarchial inheritance
    b1.fun1(); // calling the function of a through muliple inheritance
    return 0;
}