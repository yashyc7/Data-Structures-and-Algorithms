#include<iostream>
using namespace std;
int main()
{
    int row;
    int col;
    cout << "enter the row number"<<endl;
    cin >> row;
    cout << "enter the column number"<<endl;
    cin >> col;
    int **arr = new int *[row];
    for (int i = 0; i < row;i++)
    {

        arr[i] = new int[col];
    }
    //taking input
    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < col;j++)
        {
            cin >> arr[i][j];
        }
    }
    //taking output through the console
    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < col;j++)
        {
        cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    
    return 0;
}



