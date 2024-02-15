#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int weight;

private:
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

    int getHeight()
    {
        cout << "no height" << endl;
    }
};
class Male : public Human
{

public:
    string color;
    void sleep()
    {
        cout << "Male sleeping " << endl;
    }
};

int main()
{
    Male object1;
    cout << "object age" << object1.getAge() << endl;
    cout << "color" << object1.color << endl;
    cout << object1.setWeight(82) << endl;
    return 0;
}