#include <iostream>
using namespace std;
int solve(int a, int b)

{
    if (b == 0) // base case
    {
        return 1;
    }
    if (b == 1) // for function solving first base case
    {
        return a;
    }
    // recursive call
    int ans =  solve(a, b / 2);
    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
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