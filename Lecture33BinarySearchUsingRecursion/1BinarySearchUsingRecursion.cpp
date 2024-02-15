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
bool binarySearch(int arr[], int s, int e, int key)
{
    print(arr, s, e);

    if (s > e) // base case if element not found
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    cout << "Mid Element is " << arr[mid] << endl;
    if (arr[mid] == key) // base case if element exist
    {
        return true;
    }
    if (arr[mid] > key) // recusive call
    {
        bool ans1 = binarySearch(arr, s, mid - 1, key); // end ko piche le aao start remains same
        return ans1;
    }
    else // start ko aage le aao end remains same
    {
        {
            bool ans2 = binarySearch(arr, mid + 1, e, key);
            return ans2;
        
    }
}

int main()
{
    int arr[11] = {2, 4, 5, 6, 8, 22, 24, 46, 78, 86, 97};
    int s = 0;
    int e = 10;
    int key;
    cout << "Enter the key";
    cin >> key;
    bool ans = binarySearch(arr, s, e, key);
    if (ans)
    {
        cout << "Element is Present" << endl;
    }
    else
    {
        cout << "Element is not Present" << endl;
    }

    return 0;
}