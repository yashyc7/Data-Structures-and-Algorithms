#include <iostream>
//#include "hero.cpp" //this file has been made by me in the same folder of this workspace
using namespace std;
class hero
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
        cout << "level : " << endl;
    }
};
int main()
{
    // dyanamically
    cout << "Hi constructor is not called" << endl;
    hero *ptr = new hero(11, 'A');
    ptr->print();
    cout << "Hello ramesh after constructor called " << endl;

        // object created statically
    hero ramesh(10, 'B');
    cout << "adress of ramesh is " << &ramesh << endl;
    ramesh.print();

    hero temp(34, 'C');

    temp.print();

    //
    // constructor is invoked during the object is made with no return type
    // cout << ramesh.hero() << endl; //defaultu constructor

    // // static all ocation
    // hero a;
    // a.sethealth('B');
    // cout << "level is : " << a.level << endl;
    // cout << "health is : " << a.gethealth() << endl;
    // // dyanamically  allocation
    // hero *pointer = new hero;
    // pointer->setlevel('A');
    // // cout << "level is  " << (*pointer).level << endl;
    // // cout << "health is " << (*pointer).gethealth() << endl;
    // //or
    // cout << "level is " << pointer->level << endl;
    // cout << "health is " << pointer->gethealth() << endl;

    // hero Rohan;

    // // Rohan.health = 70;
    // // Rohan.level = 'A';
    // cout << "size : " << sizeof(Rohan) << endl;
    // // cout << "health is " << Rohan.health << endl;
    // cout << "level of the rohan is : " << Rohan.level << endl;

    // cout << "health is " << Rohan.gethealth() << endl;
    // cout << "level is " << Rohan.getlevel() << endl;
    // Rohan.sethealth(80);
    // Rohan.setlevel('B');
    // // cout << "level is :" << Rohan.levelis() << endl;
    // cout << "The size of the Rohan object is " << sizeof(Rohan) << endl;
    return 0;
}