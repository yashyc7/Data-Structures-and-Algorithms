#include <iostream>
using namespace std;
int me(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            // odd wale case mai
            res = res + x;
        }
        else
        {
            x = x * x;
            n = n >> 1; // divide by 2 or shift bit by 1
        }
        return (res % m);
    }
    int main()
    {
        int x, n, m;
        cin >> x >> n >> m;
        cout << "modular exponentiation is " << me(x, n, m);
        return 0;
    }
    