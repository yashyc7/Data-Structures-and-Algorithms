#include <iostream>
#include <stack>
using namespace std;

void sortInsert(stack<int> &s, int num)
{
    if (s.empty() || !s.empty() && s.top() < num)
    {
        s.push(num);
        return;
    }
    int n = stack.top();

//recursive call
    sortInsert(stack, num);
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();

    // recursive call
    sortStack(stack);

    sortInsert(stack, num);
}