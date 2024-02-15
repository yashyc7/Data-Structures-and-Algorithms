#include<iostream>
using namespace std;
class hero
{ // properties
public:
    int health; // we can access them with using . opereator
    char name[100];
    static int timetoComplete ;
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
        cout << " simple  constructor is called" << endl;
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
    static int random()
    {
        return timetoComplete;
        }
    void print()
    {
        cout << "level : " << endl;
    }
    //destructor
    ~hero()
    {
        cout << "Destructor is called " << endl;
        
    } 
};
int hero::timetoComplete = 5;
int main()
{
    cout << "time to complete " <<hero::timetoComplete << endl;
    cout << hero::random() << endl;
    // hero a;
    // cout << a.timetoComplete << endl;
    // hero b;
    // b.timetoComplete = 10;
    // cout << a.timetoComplete << endl;
    // cout << b.timetoComplete << endl;

    // //static
    // hero a;
    // // dyanmic

    // hero *ptr = new hero;
    // // maually called;
    // delete ptr;
    // return 0;
}