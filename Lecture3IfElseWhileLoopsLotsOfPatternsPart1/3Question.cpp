#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {

        cout << "The character that inputted is the lower case character ";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The character that inputted is the Upper case character ";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "The character you inputted is the Numeric case character ";
    }
    else
    {
        cout << "The character you inputted is the special case character";
    }
    return 0;
}