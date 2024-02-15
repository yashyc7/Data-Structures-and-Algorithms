#include <bits/stdc++.h>
using namespace std;
int main()
{

    string name = "abcdefghijklmnopqrstuvwxyz";
    stack<char> s;
    for (int i = 0; i < name.length(); i++)
    {
        char val = name[i];
        s.push(val);
    }
    string ans = "";
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}