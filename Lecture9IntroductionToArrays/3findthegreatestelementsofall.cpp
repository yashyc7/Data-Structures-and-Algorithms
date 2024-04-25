#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[],int n )
{

    int ans= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans; 
}

int getMin(int arr[], int n )
{
int ans= INT_MAX;
for(int i=0;i<n;i++)
{
    if(arr[i]<ans){
        ans=arr[i];
    }
}
return ans ;
}

int main()
{
int arr[10]={-2,3,5,1,54,32,11,34,43,76};
int ans=getMax(arr,10);
int min =getMin(arr,10);
cout<<min<<" is the minimum element of the array";
cout<<endl <<ans<<" is the greatest element of the array";

    return 0; 
}