#include <iostream>
using namespace std;
int sum(int arr[], int n)
{

    if (n == 0) // base case
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0]; // base case
    }
    int ans = arr[0] + sum(arr + 1, n - 1); // recusive function
    return ans;
}

int main()
{

    int arr[5] = {2, 4, 1, 5, 7};
    int ans = sum(arr, 5);
    cout << "Sum of all the array elements is " << ans << endl;
}