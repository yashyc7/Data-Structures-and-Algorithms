#include <iostream>
using namespace std;
int returnSum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int sum = arr[0] + returnSum(arr + 1, size - 1);
    return sum;
}
int main()
{

    int arr[8] = {3, 2, 5, 1, 6, 4, 6, 3};
    cout << "the sum of the array is " << returnSum(arr, 8);
    return 0;
}