#include <iostream>
#include<string.h>
using namespace std;
void sayDigit(string arr[],int n)
{
    int i = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        n / 10;
        sayDigit(lastdigit);
        cout << arr[i]<<" ";
    }
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "seven", "eight", "nine"};
    int n;
    cin >> n;
    sayDigit(arr,n);
    return 0;
}