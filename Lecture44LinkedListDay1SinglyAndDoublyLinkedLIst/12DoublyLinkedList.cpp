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
};

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
int getLength(node *&head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void InsertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void InsertAtTail(node *tail, int d)
{
    node *temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}
void InsertAtPosition(node *&head, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
    }
    else
    {
        node  *temp = new node(d);
        int count = 1;
        node *ptr = head;
        while (count < position-1)
        {
            ptr = ptr->next;
            count++;
        }
     temp->prev=ptr;
     temp->next=ptr->next;
     ptr->next=temp;
    }
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    InsertAtHead(head, 20);
    InsertAtTail(tail, 30);
    InsertAtPosition(head, 4, 55);
    print(head);
    cout << "Length of the linked list is " << getLength(head) << endl;

    return 0;
}