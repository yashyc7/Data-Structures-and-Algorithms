#include <iostream>
using namespace std;
int root(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    if (s > e) // base case rukna kaha hai
    {
        return -1;
    }
    if (arr[mid] * arr[mid] == key) // genreal phase solve for one term
    {
        return arr[mid];
    }
    e = mid - 1;
    root(arr, size - 1, key);
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    cout << root(arr, n, 36);
    return 0;
}