#include <iostream>
using namespace std;

void sayDigits(int n, string arr[])
{
    // base case
    if (n == 0)
    {
        return;
    }
    // processing
    int digit = n % 10;
    n = n / 10;

    sayDigits(n, arr);
    cout << arr[digit - 1] << " ";
}
int main()
{
    string arr[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    sayDigits(n, arr);
    return 0;
}