#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                swap(arr[j], arr[minIndex]);
            }
        }
    }
}

int main()
{
    int arr[5] = {0,1,1,0,0};

    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}