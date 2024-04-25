#include<iostream>
using namespace std;
void update(int arr[],int n )
{

    cout<<"Inside the function "<<endl;
    
     //printing the array
for(int i=0;i<3;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

    cout<<"Going back to the main function "; 
}
int main()
{ int arr[3]={1,2,3};
update(arr,3);
//printing the array
for(int i=0;i<3;i++)
{
    cout<<arr[i]<<" ";
}

    return 0; 
}



//update(int arr[],int size )

//it basically means that we havent passed the array but we have given the first element address to the function  for example if the first element at address block 100 then we are sending the address to the fucntion so  here's why : when we update the array from the function it is basically the call from the reference and therefore the main function array is modified when update function is called 