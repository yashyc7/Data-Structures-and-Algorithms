#include <iostream>
using namespace std;
void swaping (int arr[], int n)
{
    for (int i = 0; i < n; i+2)
    {
        if(i+1<n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {1, 2, 7, 8, 5};
    swaping(arr, 5);
    return 0;
}