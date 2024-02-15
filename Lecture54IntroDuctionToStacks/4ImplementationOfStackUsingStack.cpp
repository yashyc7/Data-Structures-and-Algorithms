#include <iostream>
using namespace std;
class stack
{

private:
    int data;
    int top;
    int size;
    int *arr;

public:
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (isempty())
        {
            top = top + 1;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is overflowed" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflowed" << endl;
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
    }
    bool isempty()
    {
        if (top != size - 1)
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
    stack s1(5);
    s1.push(4);
    s1.push(8);
    s1.push(6);
    s1.push(4);
    s1.push(8);
    s1.push(6);
    cout << s1.peek() << endl;
    s1.pop();
    cout << s1.peek() << endl;

    return 0;
}