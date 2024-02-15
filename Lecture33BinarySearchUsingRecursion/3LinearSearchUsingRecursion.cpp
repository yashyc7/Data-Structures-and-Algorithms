#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    cout << "size of the array is " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool isPresent(int arr[], int size, int key)
{
    print(arr, size);
    if (size == 0) // base case
    {
        return 0;
    }
    if (arr[0] == key) // base case
    {
        return 1;
    }
    else
    {
        bool answer = isPresent(arr + 1, size - 1, key);
        return answer;
    }
}

int main()
{
    int key;
    int arr[5] = {2, 4, 5, 6, 8};
    cin >> key;
    bool ans = isPresent(arr, 5, key);
    if (ans)
    {
        cout << "element is present" << endl;
    }
    else
    {
        cout << "element is not present";
    }
    return 0;
}