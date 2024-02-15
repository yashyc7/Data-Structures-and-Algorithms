// doubly linked list representation
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node()
    {
       
    }
};
void print(node *&head)
{
    node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(node *&head)
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
void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head =temp;
    head = temp;
}
void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    temp->prev =tail;
    tail = tail->next;
}
void InsertAtPosition(node *&head,node *&tail, int position,int data)
{
    if(position==1)
    {
        insertAtHead(head, data);
    }
    node *temp = head;
    int cnt = 1;
    while(cnt <=position -1)  
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertAtTail(tail, data);
        return;
    }
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 56);
    insertAtHead(tail, 74);
    InsertAtPosition(head,tail, 2, 50);
    print(head);
    int len = getLength(head);
    cout << "Length of the Linked list is" << len << endl;
    cout << "head of the list is " << head->data << endl;
    cout << "tail of the list is " << tail->data << endl;

    return 0;
}