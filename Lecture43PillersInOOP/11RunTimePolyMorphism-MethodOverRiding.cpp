#include <iostream>
using namespace std;
class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class dog : public Animal
{

public:
    void speak() // context is changed
    {
        cout << "Barking" << endl;
    }
};
int main()
{
    dog obj;
    obj.speak(); // so the dog function is called because the context is changed
    // and the object is of dog type

    return 0;
}