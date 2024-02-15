#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
    int j;
    for (int i = 0; i < n - 1; i++)
    {
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                swap(arr[minIndex], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[5] = {6, 4, 2, 1, 7};
    InsertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
