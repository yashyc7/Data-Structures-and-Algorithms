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
bool linearSearch(int *arr, int key, int size)
{
    print(arr, size);
    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        cout << "element is present";
        return true;
    }
    else
    {
        linearSearch(arr + 1, key, size - 1);
    }
}
int main()
{
    int arr[5] = {2, 3, 4, 7, 9};
    int key;
    cin >> key;
    if (linearSearch(arr, key, 5))
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }
    return 0;
}