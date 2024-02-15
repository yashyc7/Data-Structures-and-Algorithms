#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{

    if (size == 0 || size == 1) // base case
    {
        return;
    }

    // 1 case solve kar raha hain
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1]) // size-1  baar mai ek element apni right place par aa jata hai
        {
            swap(arr[i], arr[i + 1]);
        }
    }                          // har ek round mai ek element sahi place par aa jayega
    bubbleSort(arr, size - 1); // then recursive call mar dena hai
}
int main()
{
    int arr[5] = {3, 5, 2, 1, 7};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}