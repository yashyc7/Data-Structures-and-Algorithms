#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++) // for round 0 to n-2
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                swap(arr[minindex], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[5] = {7, 5, 3, 2, 1};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
