#include <iostream>
using namespace std;
bool checkPallindrome(string &str, int i, int j)
{
    if (str[i] != str[j])
    {
        return false;
    }
    if (str[i++] == str[j--])
    {
        return true;
    }
     checkPallindrome(str, i, j);
}

int main()
{
    string str = "101";
    bool ans = checkPallindrome(str, 0, str.length() - 1);
    if (ans)
    {
     cout << "Yes the string is pallindrome" << endl;
    }
    else
    {
     cout << "No the string is not pallindrome" << endl;
    }
    return 0;
}