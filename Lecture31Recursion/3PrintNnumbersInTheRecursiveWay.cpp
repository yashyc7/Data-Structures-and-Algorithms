#include<iostream>
using namespace std;
void print(int n)
{

    if(n==0)
    {
        return;
    }
    cout << n << " ";
   //recursive releation
    print(n - 1);
    return;
}

int main()
{
    int n;
    cout << "enter the number :" << endl;
    cin >> n;
    print(n);
    return 0;
}