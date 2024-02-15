#include <iostream>
using namespace std;
int BinarySearch(int arr[], int key, int s, int e)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] < key) // go to right wala part in array
        {
            s = mid + 1;
        }
        else if (arr[mid] > key) // go to left wala part in the array
        {
            e = mid - 1;
        }
        else
        {
            return mid; // if the element is found
        }
         mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {3, 5, 7, 9, 13};
    int key = 3;
    int index = BinarySearch(arr, key, 0, 4);
    cout << "Element is found at the index " << index << " in the array "; // note that -1 means that element is not found in the array
    return 0;
}