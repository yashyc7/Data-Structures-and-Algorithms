#include <iostream>
using namespace std;
int binarysearch(int size, int arr[], int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        if (key == arr[mid])
        {
            return mid;
        }

        mid = s + (e - s) / 2;
    }
 
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 5, 7, 9, 11};
    cout << "The element 8 is present in even array at the index"
         << binarysearch(6, even, 8) << endl;
    cout << "The element 7 is present in the odd array at the index"
         <<binarysearch(5, odd, 7);
    return 0;
}