#include <iostream>
using namespace std;
class Animal
{

public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class dog : public Animal // simple inheritence
{
public:
    string name = "Tyson";
};
class puppy : public dog, public actions // multi level inheritance and multiple inheritence example
{
};
class actions
{
public:
    void bark()
    {
        cout << "The dog is barking upon the street taker";
    }
};
int main()
{
    puppy p1;
    dog d;
    d.speak();
    cout << d.age << endl;
    p1.bark();
    cout << "name of the dog through multilevel inheritance" << p1.name << endl;

    return 0;
}