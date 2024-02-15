#include <iostream>
using namespace std;
class A
{
public:
    void abc()
    {
        cout << "inside first abc function" << endl;
    }
};

class B
{
public:
    void abc()
    {
        cout << "inside second abc function" << endl;
    }
};
class C : public A, public B
{
};

int main()
{
    C c1;
    c1.A::abc(); // name same so it calls the A function using scope resolution
    c1.B::abc(); // calling B function using the scope resolution
    // c1.abc();  This line is wrong because there are 2 abc function so compiler confused
    return 0;
}