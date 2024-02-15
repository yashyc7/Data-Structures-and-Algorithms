#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &inputStack, int count, int size)
{
    if (count == size / 2) // middle element tak pahuch chuke hain
    {
        inputStack.pop();
        return 0;
    }
    int num = inputStack.top();         // storing the last data
    inputStack.pop();                   // deleting temporarily
    solve(inputStack, count + 1, size); // recursive call
    inputStack.push(num);               // push that stored data
}

void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}