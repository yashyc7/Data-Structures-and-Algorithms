#include <iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid < ans)
        {
            ans = mid;
            s = mid + 1;
        }
        if (mid * mid > ans)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int num, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number"
         << endl;
    cin >> n;
    int tempSol = sqrtInteger(n);
    cout << "Answer is " << morePrecision(n, 9, tempSol) << endl;

    return 0;
}