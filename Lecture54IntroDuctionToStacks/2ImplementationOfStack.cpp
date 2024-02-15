#include <iostream>
using namespace std;
class stack
{ // properties
public:
    int top;
    int *arr;
    int size;

    // functions
public:
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top = top + 1;
            arr[top] = element;
            cout << "Element " << element << "is inserted at index " << top << endl;
        }
        else
        {
            cout << "stack is overflowed " << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is underflowed" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty " << endl;
            return -1;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    stack st(5);
    st.push(22);
    st.push(43);
    st.push(55);
    st.push(22);
    st.push(43);
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    return 0;
}