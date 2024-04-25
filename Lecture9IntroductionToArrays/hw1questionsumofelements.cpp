#include<iostream>
using namespace std;
int getSum(int arr[],int n )
{
int ans=0; 
for(int i=0;i<n;i++)
{
    ans=ans+arr[i];
}
return ans ;

}
int main()
{
int arr[5];
cout<<"Enter the elements : ";
for(int i=0;i<5;i++)
{
    cin>>arr[i];
}

int sum=getSum(arr,5);
cout<<"The sum of the all elements inside the array is : "<<sum;
return 0; 

}