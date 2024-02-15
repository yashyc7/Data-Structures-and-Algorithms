// example to find the maximum and the minimum element in the array
#include <iostream>
using namespace std;

int getMax(int arr[], int size) // getting the maximum element of the array using this function
{
    int ele = arr[0];

    for (int i = 1;  i < size; i++)
    {
        if (ele < arr[i])
        {
            ele = arr[i];
        }
    }

    return ele;
}

int getMin(int arr[], int size) // getting the minimum element from this function of the array
{

    int ele = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < ele)
        {
            ele = arr[i];
        }
    }

    return ele;
}
int main()
{

    int nums[5];
    cout << "Enter the five elements of the array " << endl;

    for (int i = 0; i < 5; i++)
    {

        cin >> nums[i];
    }

    for (int i = 0; i < 5; i++)
    {

        cout << nums[i] << " ";
    }
    cout <<endl<< "Greatest value in the array is " << getMax(nums, 5) << endl;
    cout << "Smallest value in the array is " << getMin(nums, 5) << endl;
    return 0;
}
