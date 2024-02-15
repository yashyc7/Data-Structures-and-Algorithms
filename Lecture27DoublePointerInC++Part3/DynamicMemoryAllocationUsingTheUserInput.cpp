#include <iostream>
using namespace std;
int getSum(int *arr,int n)
{
    int sum = 0;
    for (int i = 0; i < n;i++)
    {
        sum = sum + arr[i];

    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the size of the array for the Dyanamic allocation of stack memory" << endl;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) // taking input of array elements;
    {
        cin >> arr[i]; //arr[i] bhi *(arr+i) ke equal hota hai 
    }
    int ans = getSum(arr, n); //passing pointer and the size of array
    cout << "The total sum is" << ans << endl;
    cout<< "The total memory consumed by the  array and the pointer is " << (sizeof(arr) + sizeof(int[n]));

/*
   while(1)
   {

       int *ptr = new int;
   } 
   while(1)
   {
       int arr[50];
   }*/
     

    return 0;
}