#include <iostream>
using namespace std;
void BubbleSort(int *arr, int i, int n)
{

    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    BubbleSort(arr, i, n - 1);
 s
int main()
{
    int arr[5] = {3, 6, 1, 7, 4};
    BubbleSort(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}