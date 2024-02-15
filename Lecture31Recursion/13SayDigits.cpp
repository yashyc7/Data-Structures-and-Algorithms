#include <iostream>
using namespace std;
void SayDigits(int n)
{
    if (n == 0)
    {
        return;
    }
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int remainder = n % 10;
    n = n / 10;
    SayDigits(n);
    cout << arr[remainder] << " ";
}
int main()
{
    int n;
    cin >> n;
    SayDigits(n);

    return 0;
}