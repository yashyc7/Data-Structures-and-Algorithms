#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Minimum value inside the array is " << min << endl;
    cout << "Maximum value inside the array is " << max << endl;
    return 0;
}