#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {2, 5, 6, 41, 67};
    cout << "the adress of first memory block is " << arr << endl;
    cout << "the adress of the first index is :" << &arr[0] << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "adress at the index" << i << "is : " << &arr[i] << endl;
    }
    cout << "the output using *arr is " << *arr << endl;
    cout << "the output using *arr is " << *arr + 1 << endl;
    cout << "the output using *arr is " << *(arr + 1) << endl;
    cout << "the output using *arr is " << (*arr) + 1 << endl;
    cout << "the element is at 4th index is " << *(arr + 4) << endl;
    int i = 4;
    cout << i[arr] << endl;
    cout << "size of the array is " << sizeof(arr) << endl;
    int *ptr = &arr[0];
    cout << "size of array is " << sizeof(ptr) << endl;
    cout << "size of array is " << sizeof(*ptr) << endl;
    cout << "size of array is " << sizeof(&ptr) << endl;
    return 0;
}
