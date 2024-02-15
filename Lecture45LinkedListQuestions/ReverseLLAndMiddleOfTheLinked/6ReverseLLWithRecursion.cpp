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
void ReverseLinkedList(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    if (head == NULL || head->next == NULL)
    {
        cout << "List is empty or already reversed ";
    }
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}
void reverse(node *&head, node *&curr, node *&prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}
void reverseLL(node *&head)
{
    node *curr = head;
    node *prev = NULL;
    reverse(head, curr, prev);
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    InsertAtTail(tail, 30);
    InsertAtTail(tail, 40);
    reverseLL(head);
    print(head);

    return 0;
}