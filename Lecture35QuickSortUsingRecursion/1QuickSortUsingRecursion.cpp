#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s]; // pehle element ko pivot maan lete hain
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = s + count; // formula for right place
    swap(arr[pivotIndex], arr[s]);
    // left and right wala part sambhal lete hain
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        // agar element koi nahi milta aisa to fir apan swap kar dete hai kyonki condition satisfy nahi ho rahi hai waha pr
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partition karenge
    int p = partition(arr, s, e);
    // left part sort karenge
    quickSort(arr, s, p - 1);
    // right part sort karenge
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[10] = {2, 4, 1, 6, 9, 11, 4, 9, 8, 9};
    int n = 10;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
