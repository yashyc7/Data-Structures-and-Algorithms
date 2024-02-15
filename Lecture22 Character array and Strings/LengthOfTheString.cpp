#include<iostream>
using namespace std;
int main(void)
{
char name[20];
cin>>name;
for(int i=0;i<20;i++)
{
if(name[i]=='\0')//check kar lenge jaha par null character mil gya waha uska
//index print kara denge
{
    cout<<i;
    break;
}

}


    return 0;
}