#include <iostream>
using namespace std;
void print(int arr[], int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int s, int e, int key)
{
    cout << endl;
    print(arr, s, e);
    if (s > e) // element not found
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key) // element found
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    if (arr[mid] > key)
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[5] = {2, 3, 5, 6, 7};
    int key;
    cin >> key;
    int s = 0;
    int e = 4;
    if (binarySearch(arr, s, e, key))
    {
        cout << "present";
    }
    else
    {
        cout << "Absent";
    }

    return 0;
}