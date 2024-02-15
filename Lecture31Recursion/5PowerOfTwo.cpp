#include<iostream>
using namespace std;
int powerOfTwo(int n)
{
if(n==0) //base case
{
    return 1;
}
int k=2*powerOfTwo(n-1);
return k;

}
int main()
{ int n;
cin>>n;
cout<< powerOfTwo(n);

    return 0; 
}