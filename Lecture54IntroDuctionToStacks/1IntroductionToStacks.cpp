#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    //push opereations in stack 
    s.push(2);
    s.push(3);

    // pop opereation
    s.pop();
    cout << "Printing top element " << s.top() << endl;

    //checking if the stack is empty
    cout << "is the stack is empty " << s.empty()<<endl;

    // checking the size of the stack
    cout << "The size of the stack is " << s.size();
    return 0;
}