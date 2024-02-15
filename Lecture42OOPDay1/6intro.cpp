#include<iostream>
using namespace std;

class Hero
{ // properties
public:
    int health; // we can access them with using . opereator
    char name[100];

    char level;
    int gethealth()
    {
        health = 50;
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
        cout << "level of the rohan is " << health << endl;
    }
    void setlevel(char ch)
    {
        level = ch;
        cout << "level of the rohan is " << level << endl;
    }
    hero()
    {
        cout << "constructor is called" << endl;
    }

    // parameterised constructor
    hero(int health, char level)
    {
        cout << "this-> " << this << endl;
        this->health = health; // this->level ka matlab wo object ke level wale variable ki baat kar raha hai
        // function ka alag hi level wala ek variable hain
        this->level = level;
        cout << "level is : " << level << endl;
    }
    void print()
    {
        cout << "l evel : " << endl;
    }
};
int main()
{
    Hero *ramesh = new Hero;
    cout << "level is : " << ramesh->level << endl;
    cout << "health is : " << ramesh->gethealth() << endl;
}