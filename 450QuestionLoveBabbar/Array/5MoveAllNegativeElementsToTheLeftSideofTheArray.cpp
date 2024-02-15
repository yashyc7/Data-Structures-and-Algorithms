#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8] = {6, 3, 2, -1, -2, 5, -5, -3};
    int n = 8;
    int i = 0;
    int j = 0;
    for (int l = 0; l < n; l++)
    {
        if (arr[l] > 0)
        {
            j++;
        }
        if (arr[l] < 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
