#include <iostream>
using namespace std;
int firstOcc(int arr[], int s, int e, int key)
{
    int ans;
    int mid = s + (e - s) / 2;
    if (s > e) // base case
    {
        return -1;
    }
    if (arr[mid] == key)
    {

        ans = mid;
        e = mid - 1;
    }
    else if (key > arr[mid])
    {
        firstOcc(arr, s, mid - 1, key);
    }
    else
    {
        firstOcc(arr, mid + 1, e, key);
    }
    mid = s + (e - s) / 2;
    return ans;
}
int LastOcc(int arr[], int s, int e, int key)
{
    int ans;
    int mid = s + (e - s) / 2;
    if (s > e) // base case
    {
        return -1;
    }
    if (arr[mid] == key)
    {

        ans = mid;
        s = mid + 1;
    }
    else if (key > arr[mid])
    {
        LastOcc(arr, s, mid - 1, key);
    }
    else
    {
        LastOcc(arr, mid + 1, e, key);
    }
    mid = s + (e - s) / 2;
    return ans;
}

int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 4, 4, 4, 4, 4};
    cout << "The leftmostOccurence of the element is: " << firstOcc(arr, 0, 9, 4) << endl;

    cout << "The LastmostOccurence of the element is: " << LastOcc(arr, 0, 9, 4);
    return 0;
}
// pair concept
pair<int, int> p;
p.first(firstOcc);
p.second(LastOcc);
return p;