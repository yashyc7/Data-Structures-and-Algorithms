#include <iostream>
using namespace std;
int countWays(int n) 
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    return countWays(n - 1) + countWays(n - 2);
}

int main()
{

    int n;
    cin >> n;
    int ans = countWays(n);
    cout << ans << endl;

    return 0;
}