#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // creation of stack
    stack<int> s;
    // inserting element using the push opereation
    s.push(2);
    s.push(3);
    // deleting element using pop opereation
    s.pop();
    // top of the element is
    cout << "The top of the element is " << s.top() << endl;
    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
//size of the stack using stl 
    cout << "size of the stack is " << s.size() << endl;

    return 0;
}
