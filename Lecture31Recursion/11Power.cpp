#include <iostream>
using namespace std;
int powerCalculate(int n)
{

    if (n == 0)
    {
        return 1;
    }
    return 2 * powerCalculate(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int ans = powerCalculate(n);
    cout << "2 to the power" << n << "is " << ans << endl;
    return 0;
}