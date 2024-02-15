#include<iostream>
using namespace std;
void print(int arr[], int n,int start=2)
{
    for (int i = start; i < n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {2, 4, 5, 6, 7};
    print(arr, 5);
    return 0;
}