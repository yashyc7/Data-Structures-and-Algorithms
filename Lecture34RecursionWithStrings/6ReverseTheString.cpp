#include<iostream>
using namespace std;
void reverse(string& s)
{

    int i = 0;
    int j = s.size() - 1;
    while(i>j)
    {
        return;

    }
    swap(s[i], s[j]);
    i++;
    j--;
    return;
}

int main()
{
    string s = {"love"};
    reverse(s);
    cout << "Reverse of the Love is " << s;
    return 0;
}