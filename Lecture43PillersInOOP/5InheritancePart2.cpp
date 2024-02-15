#include <iostream>
using namespace std;
class Human
{
public:
    int height = 150;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    int setWeight(int w)
    {

        this->weight = w;
    }

    // int getHeight()
    // {
    //     cout << "no height" << endl;
    // }
};
class male : public Human
{

public:
    string color;
    void sleep()
    {
        cout << "Male sleeping " << endl;
    }
    int getHeight()
    {
        return height;
    }
    // Jo bhi yaha protected banke aayega usko main function access nahi kar skta
    // aisa karne ke liye aapko isi class se value return karni padegi
    //  kyonki protected member private member ke jese behave karta hain
};
int main()
{
    male m1;
    cout << m1.getHeight() << endl;
    return 0;
}