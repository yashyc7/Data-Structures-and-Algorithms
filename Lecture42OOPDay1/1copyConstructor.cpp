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
    // copy constructor
    hero(hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    // parameterised constructor
    hero(int health, char level)
    {
        cout << "this adress is  " << this << endl;
        this->health = health; // this->level ka matlab wo object ke level wale variable ki baat kar raha hai
        // function ka alag hi level wala ek variable hain
        this->level = level;
        cout << "level is : " << level << endl;
    }
    void print()
    {
        cout << "level : " << this->level << endl;
        cout << "health :" << this->health << endl;
    }
};
int main()
{
    hero suresh(70, 'C');
    hero ritesh(suresh);
    ritesh.print();
    return 0;
}