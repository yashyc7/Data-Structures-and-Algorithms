#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next = NULL;
    node *prev = NULL;

    // CONSTRUCTOR
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

// printing of the function
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

// get length of the node
int GetLength(node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    cout << "Now data of the node Head is pointing is " << head->data << endl;
}
void InsertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void InsertAtPosition(node *&head, node *&tail, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    node *ptr = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        ptr = ptr->next;
        cnt++;
    }
    // inserting aty last position
    if (ptr->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    node *temp = new node(d);
    temp->next = ptr->next;
    ptr->next->prev = temp;
    ptr->next = temp;
    temp->prev = ptr;
}

int main()
{

    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);
    cout << "The length of the Linked list is " << GetLength(head) << endl;
    insertAtHead(head, 12);
    print(head);
    InsertAtTail(tail, 14);
    print(head);
    InsertAtPosition(head, tail, 2, 55);
    print(head);

    return 0;
}