#include <iostream>
using namespace std;
void SelectionSort(int *arr, int size)
{

    if (size == 0 || size == 1)
    {
        return;
    }
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
    SelectionSort(arr, size);
}
int main()
{
    int arr[5] = {3, 6, 1, 7, 8};
    int n = 5;
    SelectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}