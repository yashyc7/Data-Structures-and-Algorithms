#include <iostream>
#include <stack>
using namespace std;
stack<int> pushBotton(stack<int> &myStack, int x)
{

    int count = 0;
    if (count == myStack.size())
    {
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();
    pushBottom(myStack, x);
    myStack.push(num);
}