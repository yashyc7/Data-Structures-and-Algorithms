#include <iostream>
using namespace std;
class node
{

public:
    int data;
    node *next;
    node(int m)
    {
        this->data = m;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next == NULL;
        }
        cout << "Memory is free for the node with data" << value << endl;
    }
};
void InsertAtHead(node *&head, int data)
{

    node *temp = new node(data);
    temp->next = head;
    head = temp;
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
void InsertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}
void InsertInPosition(node *&head, node *&tail, int position, int data)
{
    if (position == 1)
    {
        InsertAtHead(head, data);
        return;
    }
    node *nodeToInsert = new node(data); // we will go through position -1 node
    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (tail->next == NULL)
    {
        InsertAtTail(tail, data);
    }
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void reverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "List is already reversed" << endl;
        return;
    }
    node *curr = head;
    node *prev = NULL;
    while (curr != NULL)
    {
        node *forward = curr->next;
        prev = curr;
        curr = forward;
    }
    head = prev;
}
void ReverseByRecursion(node *&head)
{
    node *curr = head;
    node *prev = NULL;
    if (curr == NULL)
    {
        prev = head;
        return;
    }
    if (head == NULL || head->next == NULL)
    {
        cout << "Single element is present in the list " << endl;
        return;
    }
    
}
int main()
{
    node *node1 = new node(5);
    node *tail = node1;
    node *head = node1;
    InsertAtTail(tail, 8);
    InsertAtTail(tail, 7);
    print(head);
    ReverseByRecursion(head);
    print(head);

    return 0;
}