#include <iostream>
using namespace std;
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool isPresent(int *arr, int key, int size)
{
    print(arr, size);
    if (size == 0)
    {
        return false;
    }
    if (key == arr[0])
    {
        return true;
    }

    else
    {
        return isPresent(arr + 1, key, size - 1);
    }
}
int main()
{
    int arr[5] = {3, 5, 2, 25, 2};
    int size = 5;
    int n;
    cin >> n;
    bool ans = isPresent(arr, n, size);
    if (ans == true)
    {
        cout << "Yes! The element is present" << endl;
    }
    else
    {
        cout << "No the element is not present in the array";
    }
    return 0;
}