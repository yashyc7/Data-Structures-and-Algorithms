#include<iostream>
using namespace std;
int calculatePower(int a,int b)
{

if(b==0) //base case 1
{
    return 1;
}
if(b==1) //base case 2
{
    return a;
}
return a*calculatePower(a,b-1); 

}
int main()
{
int a,b;
cin>>a>>b;
cout<<"Answer is " <<calculatePower(a,b);

    return 0;
}