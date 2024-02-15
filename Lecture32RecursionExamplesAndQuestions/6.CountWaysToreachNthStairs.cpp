#include <iostream>
using namespace std;
int countDistinctWays(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }

    return countDistinctWays(n - 1) + countDistinctWays(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << countDistinctWays(n);
    return 0;
}