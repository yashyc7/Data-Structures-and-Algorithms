#include <iostream>
using namespace std;
void sortArray(int *arr, int n)
{
    if (n == 0 || n == 1) // base case already sorted
    {
        return;
    }

    for (int i = 0; i < n; i++) // ye step largest element ko end main pahucha dega
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    } // ek case solve kar lo

    sortArray(arr, n - 1);
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    sortArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}