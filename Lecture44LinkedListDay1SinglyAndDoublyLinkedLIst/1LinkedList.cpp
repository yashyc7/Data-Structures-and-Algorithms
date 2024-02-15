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
    //  if (tail->next == NULL)
    //  {
    //      InsertAtTail(tail, data);
    //  }
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteItem(int position, node *&head, node *&tail)
{

    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;

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
}
int main()
{
    node *node1 = new node(5);
    node *head = node1;
    node *tail = node1;
    print(head);
    InsertAtTail(tail, 45);
    print(head);
    InsertAtTail(tail, 56);
    print(head);
    InsertInPosition(head, tail, 3, 65);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    deleteItem(1, head, tail);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    return 0;
}