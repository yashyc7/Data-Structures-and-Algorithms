#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {

        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {2, 3, 4, 4, 5};
    int size = 5;
    bool ans = isSorted(arr, 5);
    if (ans == true)
    {
        cout << "Yes the Array is Sorted";
    }
    else
    {
        cout << "The Array is not Sorted";
    }

    return 0;
}