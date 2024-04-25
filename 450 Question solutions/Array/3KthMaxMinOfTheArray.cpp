#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[n];
    }
    sort(arr, arr + n);
    cout << "Min element in the array" << arr[k - 1]<<endl;
    cout << "Max element in the array " << arr[n - k] << endl;

    return 0; 
}