#include <iostream>
using namespace std;
void print(int *arr, int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}
bool BinarySearch(int *arr, int s, int e, int key)
{
    print(arr, s, e);
    int mid = s + (e - s) / 2;
    // cout << "value of arr mid is " << mid << endl;
    if (s > e)
    {
        return false;
    }
    if (arr[mid] == key)
    {
        return true;
    }
    if (key > arr[mid])
    {
        return BinarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return BinarySearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int s = 0;
    int e = size - 1;
    int key = 222;
    bool ans = BinarySearch(arr, s, e, key);
    if (ans)
    {
        cout << "Yes the element is present in the array";
    }
    else
    {
        cout << "The element is not present in the array";
    }
    return 0;
}