#include <iostream>
using namespace std;
void SelectionSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)  //for the i=0 to i=3
    {
        for (int j = i+1; j < n; j++) //for rounds j=1 to j=4 
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
     for(int i=0;i<5;i++) //for printing the elements of the sorted array
    { 
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int arr[5] = {64, 25, 12, 22, 11};
    SelectionSort(arr, 5);
   

    return 0;
} 