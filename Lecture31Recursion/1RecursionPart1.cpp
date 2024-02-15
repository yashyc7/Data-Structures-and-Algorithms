#include<iostream>
using namespace std;
int fact(int n)
{
    int ans = 0;
 if(n==0)
 {
     return 1;
 }
    ans = n * fact(n - 1);

    return ans  ;
}
int main()
{
    cout << "enter the number" << endl;
    int n;
    cin >> n;
    cout << "factorial is " << fact(n) << endl;

    return  0;
}