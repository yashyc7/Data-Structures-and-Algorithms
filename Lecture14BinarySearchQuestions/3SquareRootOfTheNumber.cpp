#include <iostream>
using namespace std;
int squareroot(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid > n)
        {

            e = mid - 1;
        }
        if (mid * mid < n)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
}
int main()
{
    int x;
    cin >> x;
    int square = squareroot(x);
    cout << "The square root of the number " << x << " is " << square << endl;

    return 0;
}