#include <iostream>
using namespace std;
void InsertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++) // for rounds there is n-1 rounds
    {
        int j;
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shifting
                arr[j + 1] = arr[j]; //copying data 
            }
            else
            {
                break; // will end j loop only
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[7] = {6, 5, 4, 3, 2, 1, 0};
    int n = 7;
    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}