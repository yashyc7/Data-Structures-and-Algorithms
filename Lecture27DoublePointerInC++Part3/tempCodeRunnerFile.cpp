#include<iostream>
using namespace std;
int main()
{  int row;
cin>>row;
int col;
cin>>col;
    int **arr=new int*[row];

for(int i=0;i<row;i++)
{
    arr[i]=new int*[col];
}//making of2d array is complete now we will take input from the user 
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {

        cin>>arr[row][col];
    }
}
//now showing the output to the user
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<<arr[row][col];
    }
    cout<<endl;
}

return 0;

}