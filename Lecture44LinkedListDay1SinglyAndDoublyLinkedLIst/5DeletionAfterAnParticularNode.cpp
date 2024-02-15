#include <iostream>
using namespace std;
class node
{

public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        delete next;
        this->next = NULL;
        cout << "The node with data" << value << "has been deleted" << endl;
    }
};
void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
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
void InsertAfterAParticularNode(node *&head, int position, int data)
{

    node *temp = new node(data);
    node *ptr = head;

    int cnt = 1;
    while (cnt != position)
    {
        ptr = ptr->next;
        cnt++;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    return;
}

int main()
{
    node *node1 = new node(5);
    node *head = node1;
    node *tail = node1;
    insertAtTail(tail, 10);
    print(head);
    insertAtTail(tail, 20);
    insertAtTail(tail, 25);
    insertAtTail(tail, 30);
    print(head);
    InsertAfterAParticularNode(head, 4, 15);
    print(head);
    return 0;
}

