#include <iostream>
using namespace std;
class stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // functions
    stack(int size)
    {

        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (top != size - 1)
        {
            top = top + 1;
            arr[top] = element;
            cout << arr[top] << " is inserted" << endl;
        }
        else
        {
            cout << "space for push element  is not availiable" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is already empty" << endl;
        }
        else
        {
            cout << arr[top] << "is deleted" << endl;
            top--;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
            return arr[top];
    }
    bool isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }
    void print()
    {
        if (isempty())
        {
            cout << "stack is empty ";
        }
        else
        {
            top = -1;
            while (top != size - 1)
            {
                ++top;
                cout << arr[top] << " ";
            }
        }
    }
};

int main()
{
    stack s(5);
    s.push(4);
    s.push(5);
    s.push(5);
    s.push(77);
    s.push(75);
    s.push(53);
    s.print();
    s.pop();
    s.pop();
    s.pop();
}