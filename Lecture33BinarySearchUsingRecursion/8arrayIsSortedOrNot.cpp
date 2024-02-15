#include <iostream>
using namespace std;
bool isSortedOrNot(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1]) // ek case solve kar lo baki recursion se kara lenge hum log
    {
        return false;
    }
    else
    {
        bool ans = isSortedOrNot(arr + 1, size - 1);
        return ans;
    }
}

int main()
{
    int arr[6] = {2, 4, 5, 8, 9, 13};
    if (isSortedOrNot(arr, 6))
    {
        cout << "Array is sorted ";
    }
    else
    {
        cout << "Array is not sorted";
    };

    return 0;
}