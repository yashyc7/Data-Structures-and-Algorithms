#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) // taking array input
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = n - 1;
    while (i <= j) // swapping it
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++) // printing the array
    {
        cout << arr[i] << " ";
    }

    return 0;
}