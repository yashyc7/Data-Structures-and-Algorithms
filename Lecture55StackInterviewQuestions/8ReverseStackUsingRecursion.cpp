#include <bits/stdc++.h>
using namespace std;

int count = 0;
void reverseStack(stack<int> &stack)
{
    int num = stack.top();
    if (count == stack.size())
    {
        stack.push(num);
        return;
    }
    stack.pop();
    count++;
    reverseStack(stack);
}