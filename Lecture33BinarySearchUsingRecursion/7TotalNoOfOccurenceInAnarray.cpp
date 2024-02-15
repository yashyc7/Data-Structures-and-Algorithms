#include <iostream>
using namespace std;
int totalOccurence(int arr[], int n, int key)
{
    int ans = 0;

    if (n == 0) // base case if no element is present in the array
    {
        return 0;
    }
    if (arr[0] == key) // base case
    {
        ans++;
    }
    return ans + totalOccurence(arr + 1, n - 1, key); // recursive function
}
int main()
{

    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3};
    cout << "total occurence of 3 is " << totalOccurence(arr, 10, 3)
         << endl;
    return 0;
}