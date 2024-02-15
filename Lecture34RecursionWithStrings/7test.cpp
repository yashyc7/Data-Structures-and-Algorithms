#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int c = 5;
    int *p = &c;
    cout << *p << endl;
    cout << p << endl;

    int *ptr = new int; // 1d allocation of the variable inside the heap memory
    // int **ptr = new int *[row];//2d allocation of the array

    // for (int i = 0; i < n; i++)
    // // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         for (int k = 0; k < n; k++)
    //         {

    //             for (int l = 0; l < n;l++)
    //             {
    //                 cout << "This is my Statement ";

    //             }
    //         }
    //     }
    // }
    return 0;
}