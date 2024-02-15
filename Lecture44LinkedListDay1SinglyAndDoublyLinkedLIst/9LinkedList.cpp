#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~node() // destructor
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << endl
             << "Memory is free with data " << value << " ";
    }
};
void InsertAtHead(node *&head, int d)
{

    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void print(node *&head)
{
    node *temp = head;
    cout << "The data is: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtPosition(node *&head, int position, int d)
{
    node *pivot = head;
    node *temp = new node(d);
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    int count = 1;
    while (count < position - 1)
    {
        pivot = pivot->next;
        count++;
    }
    temp->next = pivot->next;
    pivot->next = temp;
}
void DeletingANode(node *&head, int position)
{

    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        // memory freeing
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *curr = head;
        node *prev = NULL;
        int cnt = 1;
        while (cnt < position-1)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            prev->next = NULL;
            delete curr;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    node *node1 = new node(10); // created node of data 4
    node *head = node1;
    node *tail = node1;
    cout << node1->data << " ";
    cout << node1->next << " " << endl;
    InsertAtTail(tail, 12);
    InsertAtTail(tail, 34);
    InsertAtTail(tail, 55);
    DeletingANode(head, 4);
    cout << "\n head data is : " << head->data << " ";
    cout << "\n tail data is : " << tail->data << " " << endl;
    print(head);

    return 0;
}