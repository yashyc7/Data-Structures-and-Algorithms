#include <iostream>
#include <stack>
using namespace std;
int main()
{


    stack<int> s; // creation of stack
    s.push(5);    // pushing data in the stack
    s.push(10);
    s.pop();
    cout << "Top element of the stack is " << s.top() << endl;
    cout << "Pop the data " << endl;
    cout << "Is stack empty? " << s.empty() << endl;
    cout << "Size of the stack " << s.size() << endl;
    return 0;
}