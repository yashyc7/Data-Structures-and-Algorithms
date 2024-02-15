#include <iostream>
using namespace std;
int leftMostOccurence(int *arr, int s, int e, int key)
{
    int ans = -1;
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        ans = mid;
        e = mid - 1;
    }
    if (key > arr[mid])
    {
        leftMostOccurence(arr, mid + 1, e, key);
    }
    if (key < arr[mid])
    {
        leftMostOccurence(arr, s, mid - 1, key);
    }
}

void Index(int *arr, int s, int e, int key)
{
    cout << "left most occurence of the key is " << leftMostOccurence(arr, s, e, key) << endl;
    // cout << "right most occurence of the key is " << rightMostOccurence(arr, s, e, key);
    return;  
}
int main()
{
    int key;
    int arr[5] = {3, 5, 5, 5, 8};
    cin >> key;
    Index(arr, 0, 4, key);

    return 0;
}