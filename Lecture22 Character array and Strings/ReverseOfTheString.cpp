#include<iostream>
using namespace std;
void reverse(char name[],int length)


{ int s=0;
int e=length-1;
while(s<e)
{
    swap(name[s++],name[e--] );
    
}

  cout<<name;  
}

int main()
{ int i;
char name[20];
cin>>name;
for( i=0;i<20;i++)
{
if(name[i]=='\0')//check kar lenge jaha par null character mil gya waha uska
//index print kara denge
{
    cout<<i<<endl;
    break;
}}
reverse(name,i);
    return 0;
}