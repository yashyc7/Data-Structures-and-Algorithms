#include <iostream>
using namespace std;
class B
{
public:
    int a, b;

public:
    int add()
    {
        return a + b;
    }
    // void opereator+ (B &obj)
    // {
    //     //int value1 = this->a;
    //    // int value2 = obj.a;
    //    // cout << "output" < < < value2 - value1 << endl;
    //     cout << "hello babbar" << endl;
    // }
    void opereator{}()
    {
        cout << "Mai bracket hu" << this->a << endl;
    }
};
int main()
{
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    return 0;
}