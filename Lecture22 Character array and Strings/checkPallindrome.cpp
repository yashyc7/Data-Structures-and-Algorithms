#include<iostream>
using namespace std;
char tolowercase(char ch)
{

    if(ch>='a' && ch<='z')
    {
        return ch;

    }
    else{


    char temp=ch-'A'+'a';
    return temp;
    }
}
bool checkPallindrome(char a[],int n)
{ bool count;
int s=0;
int e=n-1;
while(s<=e)
{
    if(a[s]!=a[e])
    {
        return 0;
    }
    else{
        s++;
        e--;
        count ++;  
    }
}
return count;

}
int main()

{ char arr[4];
cin>>arr; 
   bool y= checkPallindrome(arr,4);
cout<<y;
char tem=tolowercase('X');
cout<<endl<<tem;
    return 0;
}