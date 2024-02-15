#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~node()
    {
        int value = data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with the data " << value << endl;
    }
};
void InsertNode(node *&tail, int element, int d)
{
    // assumning that the element is present int thelist
    if (tail == NULL)
    {
        node *newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {

        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found;
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node *tail)
{
    node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << " ";
}
void deleteNode(node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "List is empty , please check again " << endl;
        return;
    }
    else
    {

        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(tail==curr)
        {
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    node *tail = NULL;
    InsertNode(tail, 3, 5);
    InsertNode(tail, 5, 7);
    InsertNode(tail, 7, 9);
    InsertNode(tail, 9, 10);
    deleteNode(tail, 5);
    print(tail);
    return 0;
}