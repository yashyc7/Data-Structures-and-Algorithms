#include <iostream>
using namespace std;
int pivotIndex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >=arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[6] = {7, 9, 10, 1, 2, 3};
    cout << "The pivot element is stored at the index " << pivotIndex(arr, 5) << endl;

    return 0;
}