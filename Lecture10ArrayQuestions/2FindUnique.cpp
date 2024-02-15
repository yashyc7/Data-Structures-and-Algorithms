#include <iostream>
using namespace std;
int findUnique(int arr[], int n)
{
    int ans = 0;
    // using xor
    // if a^a then answer is 0
    //  0 ^a then answer is a
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[7] = {3, 7, 2, 2, 7, 3, 4};
    int k = findUnique(arr, 7);
    cout << "unique element in the array is " << k << endl;
    return 0;
}