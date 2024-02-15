#include<iostream>
using namespace std;
void SayDigits(int n)
{
if(n==0)
{ 
    return ;
}
cout<<n<<endl;
SayDigits(n-1);


}
int main()
{

int n;
cin>>n;
SayDigits(n);


    return 0; 
}