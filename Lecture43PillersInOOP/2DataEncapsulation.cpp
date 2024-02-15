#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {

        return this->age;
    }
};

int main()
{
    student first;
    cout << "Age of the student is " << first.getAge() << endl;
    cout << "sab sahi chal raha hai" << endl;
    return 0;
}