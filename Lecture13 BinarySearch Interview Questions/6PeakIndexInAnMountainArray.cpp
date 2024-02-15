#include<iostream>
using namespace std;
int peakelement(int arr[],int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while(s<e)
    {
if(arr[mid]<arr[mid+1])
{
    s = mid + 1;
}
else
{
    e = mid;
}
mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{

    int arr[5] = {3, 4, 5, 6, -1};
    int peakIndex = peakelement(arr,5 );
    cout << "peak elment is located at the index" << peakIndex;
    return 0; 
}