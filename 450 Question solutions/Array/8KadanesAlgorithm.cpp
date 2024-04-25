#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {-1, -2, -3, -4, -5};
    int sum = 0;
    int maxi = arr[0];  //kadanes algorithm maximum 
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
        maxi = max(sum, maxi);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "Maximum sum is " << maxi << endl;

    return 0;
}