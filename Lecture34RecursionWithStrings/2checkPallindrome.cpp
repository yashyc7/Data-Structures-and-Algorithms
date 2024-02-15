#include <iostream>
using namespace std;
bool checkPallindrome(string str)
{

    int s = 0;
    int e = str.size() - 1;
    if (s > e)
    {
        return false;
    }
    if(str[s]!=str[e])
    {
        return false;
    }

    if (str[s] == str[e])
    {
        return true;
    }
    s++;
    e--;
    return checkPallindrome(str);
}

int main()
{
    string str = {"dabcbad"};
    int ans = checkPallindrome(str);
    if (ans)
    {
        cout << "The array is Pallindrome" << endl;
    }
    else
    {
        cout << "The array is not Pallindrome" << endl;
    }

    return 0;
}
