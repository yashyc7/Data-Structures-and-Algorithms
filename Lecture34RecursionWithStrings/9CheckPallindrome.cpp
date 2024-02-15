#include <iostream>
using namespace std;
bool checkPallindrome(string name, int i, int j)
{
    // base case
    if (i > j)
    {
        return true;
    }
    if (name[i] != name[j])
    {
        return false;
    }
    if (name[i] == name[j])
    {
        i++;
        j--;
        return true;
    }
    checkPallindrome(name, i, j);
}

int main()
{
    string name = "abbccbba";
    cout << endl;
    cout << "The string is pallindrome " << checkPallindrome(name, 0, name.length() - 1);

    return 0;
}