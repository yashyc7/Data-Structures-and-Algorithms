#include <iostream>
#include<string.h>
//#include "hero.cpp" //this file has been made by me in the same folder of this workspace
using namespace std;
class hero
{ // properties
public:
    int health; // we can access them with using . opereator
    char *name;

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
        name = new char[100];
    }
   // copy constructor
    hero(hero& temp)
    {
        char *temp = new char(strlen(temp.name) + 1);
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
        cout << "Name is " << this->name;
        cout << "level : " <<this->level<< endl;
        cout << "health :" << this->health << endl;
    }
    void setname(char name[])
    {
        strcpy(this->name, name);
    }
};
int main()
{
    hero hero1;
    hero hero2;
    hero1 = hero2;

    return 0;
}