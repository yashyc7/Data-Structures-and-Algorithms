#include <iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key)
{
    int ans = -1;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int LastOccurence(int arr[], int n, int key)
{
    int ans = -1;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int odd[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << "First occurence of the 3 is " << firstOccurence(odd, 11, 3) << endl;
    cout << "Last occurence of the 3 is " << LastOccurence(odd, 11, 3) << endl;
    cout << "No of Occurences in the array is " << (LastOccurence(odd, 11, 3) - firstOccurence(odd, 11, 3)) + 1;
    return 0;
}