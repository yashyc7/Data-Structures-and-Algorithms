//function overloading
#include<iostream>
using namespace std;
class A
{

    public: void sayHello(char c)
    {
        cout << "Hello Yash " <<c<< endl;
    }
    int  sayHello(string name)
    {
        cout << "Hello "<<name << endl;
        return 1;
    }
};
int main()
{
    A a;
    a.sayHello('l');
    a.sayHello("Yash Chauhan");
    return 0;
}
