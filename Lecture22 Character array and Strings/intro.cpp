#include<iostream>
using namespace std;
int getlength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0';i++)
    {

        count++;
    }
    return count;
}
void reverse(char name[], int l)
{
    int s = 0;
    int e = l - 1;
    while(s<e)
    {
        swap(name[s++], name[e--]);
    }

}
bool checkPallindrome(char name[],int l)
{
    int s = 0;
    int e = l - 1;
    while(s<=e)
    { 
if((name[s++])==(name[e--]))
{
    return 1;
}

    }
    return 0;
}
char toLower(char ch)
{
    if((ch>='a'&&ch<='z')|| (ch>='0'&&ch<='9'))
    {
        return ch;
    }
    if(ch>='A'&&ch<='Z')
    {
        return ch - 'A' + 'a';
    }




}
int main()
{
    char name[20];
    cout << "enter your name" << endl;
 
    cin >> name;
   
    cout << "Your name is: " << name << endl;

    cout << "Length of your name is :" << getlength(name)<<endl;
    int l = getlength(name);
 
    cout << "your reverse name is :";

    reverse(name, l);
    cout << name << endl;
    cout << "pallindrome : " << checkPallindrome(name,l)<<endl;
    cout << "To lower case is " << toLower('1');
    return 0;
}
