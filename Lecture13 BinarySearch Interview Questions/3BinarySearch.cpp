#include <iostream>
using namespace std;
int Search(int arr[], int key, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
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
    return -1;
}

int main()
{

    int even[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int ans = Search(even, 2, 8);
    cout << "The element is present at the index " << ans << endl;

    return 0;
}