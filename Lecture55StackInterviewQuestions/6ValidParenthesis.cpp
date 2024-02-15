

// alternative method by love babbar
bool is ValidParenthesis(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char top = s.top();
                if(matches(top,ch))
                {
                    s.pop();
                }
                else{

                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
}