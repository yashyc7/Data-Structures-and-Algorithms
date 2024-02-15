#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

public:
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free with data" << val << " ";
    }
};
void InsertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}   
void InsertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = tail->next;
}
void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int lengthOflist(node *&head)
{
    int length = 0;
    node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void InsertAtPosition(node *&head, node *&tail, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    node *ptr = head;
    int count = 1;
    while (count < position - 1)
    {
        ptr = ptr->next;
        count++;
    }
    if (ptr->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    node *temp = new node(d);
    temp->next = ptr->next;
    temp->prev = ptr;
    ptr->next = temp;
}
void DeletingANode(node *head, node *&tail, int position)
{

    node *previous = NULL;
    node *current = head;
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
    }

    else
    {
        int count = 1;
        while (count < position - 1)
        {
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next->prev = previous;
        current->prev = NULL;
        current->next = NULL;
        delete current;
    }
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    InsertAtHead(head, 12);
    InsertAtTail(tail, 55);
    InsertAtPosition(head, tail, 4, 67);
    DeletingANode(head, tail, 2);
    print(head);
    cout << "length of the Linked list is" << lengthOflist(head) << endl;
    cout << "head data is " << head->data << endl;
    cout << "tail data is " << tail->data << endl;
    return 0;
}