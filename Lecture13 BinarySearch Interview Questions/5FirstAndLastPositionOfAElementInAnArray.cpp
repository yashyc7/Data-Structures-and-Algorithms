#include <iostream>
using namespace std;
int firstOcc(int arr[], int key, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;  //storing the answer for more left searches for key elements
            e = mid - 1;
        }
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        if (key > arr[mid])
        {

            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int LastOcc(int arr[], int key, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2; //storing the answer for more right searches for keys
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        if (key > arr[mid])
        {

            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[10] = {3, 3, 3, 3, 3, 3, 5, 5, 5, 5};
    int first = firstOcc(arr, 4, 10);
    int last = LastOcc(arr, 4, 10);
    cout << "The element first occurence is at the index " << first << " and the last occurence of the number is at index " << last << endl;
    return 0;
}