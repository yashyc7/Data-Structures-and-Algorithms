#include <iostream>
using namespace std;
int main()
{
    int a[20] = {1, 2, 3, 5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;
    cout << *(&a) << endl;
    int arr[10];
    // error  arr = arr + 1;
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << *ptr << endl;
    return 0;
}