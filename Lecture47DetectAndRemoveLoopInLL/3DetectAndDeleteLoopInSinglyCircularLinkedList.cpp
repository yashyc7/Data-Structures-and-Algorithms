#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~node()
    {
        int value = data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with the data " << value << endl;
    }
};
bool DetectLoop(node *head)
{

    if (head == NULL)
    {
        return false;
    }
    node *slow = head;
    node *fast = head;
    node *temp = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

node *HeadOfLoop(node *head)
{
    node *slow = head;
    node *fast = head->next;
    node *temp = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    if (slow == fast)
    {
        node *Instersection = slow;
    }
    slow == head;

    while (slow != fast)
    {
        temp = temp->next;
        slow = slow->next;
    }

    return slow;
}

void DeleteLoop(node *head)
{

    node *temp = head;
    node *Intersect = HeadOfLoop(head);
    while (temp->next != Intersect)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return;
}

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
    deleteItem(1, head, tail);
    print(head);
    // tail->next = head->next;
    if (DetectLoop(head))
    {
        cout << "Loop is present";
        cout << "Deleting the loop " << endl;
        DeleteLoop(head);
        print(head);
    }
  

    return 0;
}