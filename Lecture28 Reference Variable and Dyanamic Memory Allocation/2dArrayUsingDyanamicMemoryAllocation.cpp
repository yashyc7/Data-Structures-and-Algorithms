
// this is for same size of the column and the row size input by user
// array defined by the statement int **arr=new int*[n];
// in  1D array it was defined by int *arr=new int[n];
#include<iostream>
using namespace std;
int main()
{ int  n;
cin>>n;
	int** arr = new int*[n];
	for (int i = 0; i < n;i++)
	{
		arr[i] = new int[n];
	}
	//taking input
	for (int i = 0; i < n;i++)
{
	for (int j = 0; j < n;j++)
	{
		cin >> arr[i][j];
	}
}
//taking output
cout << endl;
for (int i = 0; i < n;i++)
{
	for (int j = 0; j < n;j++)
	{

		cout << arr[i][j]<<" ";
	}
	cout << endl;
}
	return 0;
}
