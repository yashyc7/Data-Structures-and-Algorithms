#include <iostream>
using namespace std;
int FiboNum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return FiboNum(n - 1) + FiboNum(n - 2);
}

int main()
{
    int n;
    cin >> n;
    int ans = FiboNum(n);
    cout << "Fibonacci Number at the nth given place is " << ans;
    return 0;
}
