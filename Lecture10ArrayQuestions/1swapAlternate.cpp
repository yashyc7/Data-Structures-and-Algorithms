#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    print(arr, 6);
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    swapAlternate(arr, 6);
}