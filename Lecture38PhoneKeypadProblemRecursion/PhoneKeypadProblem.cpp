#include <iostream>
using namespace std;

void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{
    // base case
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }
    int number = digit(index) - '0'; // digit wala index 2 wala character dega to muje use '0' character se minus karna padega to muje
    // uska digit mil jayega agar hum aisa nahi karte to hume ASCII value milta

    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}
vector<string> letterCom binations(string digits)
{
    if (digits.length() <= 0)
    {
        return ans;
    }
    string output;
    int index = 0;
    string mapping[10] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digits, output, index, ans, mapping);
    return ans;
}