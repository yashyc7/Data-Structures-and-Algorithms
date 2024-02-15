#include <iostream>
using namespace std;
int main()
{

    char *ch = new char;
    cout << "the size of the pointer and the new char  total is: ";
    cout << (sizeof(char) + sizeof(ch)) << endl;
    int *i = new int;
    cout << (sizeof(i) + sizeof(int)) << endl;
    int *arr = new int[6];
    
    cout << (sizeof(arr) + sizeof(int[6])) << endl;

    return 0; 
}