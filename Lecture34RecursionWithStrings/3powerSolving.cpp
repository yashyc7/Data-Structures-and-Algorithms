#include <iostream>

using namespace std;
int solve(int base, int power)
{

    if (power == 0) // base case
    {
        return 1;
    }
    if (power == 1) // for function solving first base case
    {
        return base;
    }
    return base * solve(base, power - 1);
}
int main()
{
    int a, b;
    cout << "Enter the number" << endl;
    cin >> a >> b;
    int ans = solve(a, b);
    cout << "power of a to b is " << ans << endl;

    return 0;
}
