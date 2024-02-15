#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node for data" << val << endl;
    }
};

// traversing a linked list
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

// get length of the linked list
int getLength(node *head)
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

// insertAthead function linked list opereation
void insertAthead(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// insert At tail function
void insertAtTail(node *&head, node *&tail, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void deletenode(int position, node *&head, node *&tail)
{
    // deleting first or last node
    if (position == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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
        if (curr->next == NULL)
        {
            tail = prev;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

// insert at any position
void insertAtPostion(node *&head, node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAthead(head, tail, data);
        return;
    }
    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insertAtLastPosition
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }
    node *NodeToInsert = new node(data);

    NodeToInsert->prev = temp;
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);
    cout << "head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;
    int len = getLength(head);
    cout << "length is " << len << " " << endl;
    insertAtTail(head, tail, 11);
    print(head);
    cout << "head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;
    cout << "length is " << getLength(head) << endl;
    insertAtTail(head, tail, 25);
    print(head);
    cout << "head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;
    cout << "length is : " << getLength(head) << endl;
    insertAtPostion(head, tail, 4, 54);
    print(head);
    deletenode(3, head, tail);
    print(head);
    cout << "head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;

    return 0;
}