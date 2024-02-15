#include <iostream>
using namespace std;
int FibonacciSeries(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int ans = FibonacciSeries(n - 1) + FibonacciSeries(n - 2);
    return ans;
}
int main()
{
    int n;
    cin >> n; 
    int ans = FibonacciSeries(n);
    cout << "The " << n << "FibonacciSeries is " << ans << endl;
    return 0;
}