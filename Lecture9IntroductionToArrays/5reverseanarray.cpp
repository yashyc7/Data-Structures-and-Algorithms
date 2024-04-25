#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,2,3,4,5};
int n=5;

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
    while(i<n-1-i)
    {
        swap(arr[i],arr[n-1-i]);
    }
}

for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
    return 0; 
}