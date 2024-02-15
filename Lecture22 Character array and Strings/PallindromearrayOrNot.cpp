#include<iostream>
using namespace std;
void pallindrome(char name[], int length)
{ bool count=0;
int s=0;
int e=length-1;
while(s<e)
{ 
 if(name[s]==name[e])
 {
    count=1;
    s++;
    e--;

    
 }   
 else 
 { cout<<"the  character array is not a pallindrome";
   count=0;
    break;
 }
  


}
if(count==1)
{
    cout<<"the character array is pallindrome";
}

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
    cout<<"Length:"<<i<<endl;
    break;
}

}


pallindrome(name,i);


    return 0;
}