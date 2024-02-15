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
    ~node()
    {

        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for the node with data " << value << endl;
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
    temp->next = NULL;
    tail = temp;
}
void InsertAtPosition(node *&head, int d, int position)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    node *temp = new node(d);
    node *ptr = head;
    int count = 1;
    while (count < position - 1)
    {
        ptr = ptr->next;
        count++;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}

void DeleteNode(int position, node *&head)
{

    if (position == 1)
    {
        node *temp = head;
        head = head->next;
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
    }
}
int main()
{
    node *node1 = new node(4);
    node *head = node1;
    node *tail = node1;
    InsertAtHead(head, 6);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 9);
    InsertAtPosition(head, 88, 5);
    print(head);
    DeleteNode(5, head);
    print(head);

    cout << "head data is " << head->data << endl;
    cout << "tail data is " << tail->data << endl;

    return 0;
}