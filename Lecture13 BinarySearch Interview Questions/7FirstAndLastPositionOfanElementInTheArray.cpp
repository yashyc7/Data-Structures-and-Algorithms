#include <iostream>
using namespace std;

int firstOccurence(int arr[], int key, int n)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid=s+(e-s)/2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        if (key < arr[mid])
        {

            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurence(int arr[],int key ,int n ){

    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s=mid+1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        if (key < arr[mid])
        {

            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{

    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    cout << "The first Occurence of the element 2 is at the index" << firstOccurence(arr, 2, 8) << endl;
    cout << "The last Occurence of the element 2 is at the index" << lastOccurence(arr, 2, 8);

    return 0;
}