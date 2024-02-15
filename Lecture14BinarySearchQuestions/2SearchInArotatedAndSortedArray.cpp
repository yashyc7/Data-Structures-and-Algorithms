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
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
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
int Search(int arr[], int size, int key)
{
    // write your code here
    //  Return the positon of key in arr else return -1
    int pivot = getPivot(arr, size);
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        return BinarySearch(arr, key, pivot, size- 1);
    }
    else
    {

        return BinarySearch(arr, key, 0, pivot - 1);
    }
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int index = Search(arr, 5, 7);
    cout << "The element is present at the index " << index << endl;

    return 0;
}