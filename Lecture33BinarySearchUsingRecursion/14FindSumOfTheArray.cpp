#include <iostream>
using namespace std;
int SumOfTheArray(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    return arr[0] + SumOfTheArray(arr + 1, size - 1);
}

int main()
{
    int arr[5] = {3, 2, 5, 1, 6};
    int size = 5;
    int ans = SumOfTheArray(arr, size);
    cout << "The sum of the all elements of the array is " << ans << endl;

    return 0;
}