#include<iostream>
using namespace std;
int main()
{
 int arr[5]={5,3,2,1,7};

for(int i=0;i<5;i+=2)
{ 
    if(i+1<5) 
    {
        swap(arr[i],arr[i+1]);
    
    }

}


for(int i=0;i<5;i++)
{

cout<<arr[i]<<" "; 
}


    return 0; 
}