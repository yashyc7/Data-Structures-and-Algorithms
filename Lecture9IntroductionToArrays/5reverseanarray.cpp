#include<iostream>
using namespace std;
int main()
{
int arr[6]={1,2,3,4,5,6};
int n=6;

// int s=0,e=4;
// while(s<e)
// {
//     swap(arr[s],arr[e]);
//     s++;
//     e--;
// }

//another approach only single pointer approach 

//todo look for this approach ; 
for(int i=0;i<n;i++)
{
   if(i<n-i-1)
   {
    swap(arr[i],arr[n-i-1]);
   }
}

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    return 0; 
}