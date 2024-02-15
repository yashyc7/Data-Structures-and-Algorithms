#include <iostream>
using namespaece std;
class Node
{
public:
    int data;
    node *next;
    node *(int m)
    {
        this->data = m;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for the node with data" << value << endl;
        j
    }
};
void InsertAthead(node *&head, int data)
{

    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void InsertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteItem(int position, node *&head, node *&tail)
{
    int cnt = 1;
    node *curr = head;
    node *prev = NULL;
    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    tail = prev;
    
}
void InsertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}
void InsertAtPosition(node *&head, int data, int position, int data)
{
    node *temp = new node(data);
    node *curr = head;
    node *prev = NULL;
    if (position == 1)
    {
        InsertAthead(head, data);
    }
    int cnt = 1;
    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    temp->next = curr->next;
    curr->next = temp;
}

int main()
{

    return 0;
}