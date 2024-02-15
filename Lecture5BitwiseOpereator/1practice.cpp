#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    cout << "a&b=" << (a & b) << endl;
    cout << "a|b=" << (a | b) << endl;
    cout << "~b=" << (~b) << endl;
    cout << "a^b=" << (a ^ b) << endl;
    cout << (17 >> 1) << endl;
    cout << (21 << 2) << endl;
    int i = 4;
    cout << ++i << endl;
    // 5
    cout << i++ << endl;
    // 5 after the execution it becomes 6
    cout << --i << endl;
    // 5 after execution it becomes 5
    cout << i-- << endl;
    // 5  after execution it becomes 5

    int n;
    cout << "enter the value of the n " << endl;
    cin >> n;
    int z = 1;
    for (;;)
    {
        if (z < n + 1)
        {
            cout << z << " ";
            z++;
        }
        else
            break;
    }

    for (int a = 0, b = 1; a < 0 && b <= 1; a--, b--)
    {
        cout << a << " " << endl;
        cout << b << " " << endl;
        cout << "Hello  world" << endl;
        cout << "Hello world" << endl;
        cout << "Hello world " << endl;
    }

    return 0;
}