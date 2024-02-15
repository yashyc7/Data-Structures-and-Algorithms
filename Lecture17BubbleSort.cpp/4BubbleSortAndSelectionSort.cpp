#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n)
{
//for n-1 rounds 
    for (int i = 0; i < n - 1;i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n;j++)
        {
            if(arr[j]<arr[minIndex])
        {
            swap(arr[j], arr[minIndex]);
        }
        }
    }
}

void bubbleSort(int arr[],int n)
{
    for (int i = 0; i < n - 1;i++)
{
        for (int j = 0; j < n - i;j++)
        {
            if(arr[j+1]<arr[j])
        {
            swap(arr[j + 1], arr[j]);
        }
        }
}
}

int main()
{
    int arr[5] = {7, 5, 3, 2, 9};
    bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}