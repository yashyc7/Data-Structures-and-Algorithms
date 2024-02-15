#include<iostream>
using namespace std;
int powerOf2(int n)
{

if(n==0)
{
    return 1;
}
int smallerProblem = powerOf2(n - 1);
int BiggerProblem = 2 * smallerProblem;
return BiggerProblem;
return 2* powerOf2(n-1);  //it is also right ans
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    int ans = powerOf2(n);
    cout << "answer is " << ans << endl;

    return 0;
}