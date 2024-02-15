#include <iostream>
using namespace std;
int Power(int a, int b)
{

    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a; 
    }
    return a * Power(a, b - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << Power(a, b) << endl;
    return 0;
}