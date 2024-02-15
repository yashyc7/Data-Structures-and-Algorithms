#include <map>
#include <iostream>
using namespace std;

void InsertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

Node *copyList(Node *head)
{
    Node *clonehead = NULL;
    Node *clonetail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        InsertAtTail(clonehead, clonetail, temp->data);
        temp = temp->next;
    } // clone linked list is created
    // creating a map
    unordered_map<Node *, Node *> oldToNewNode;
    Node *originalNode = head;
    Node *cloneNode = clonehead;
    while (temp != NULL)
    {
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    originalNode = head;
    cloneNode = tail;
    while (originalNode != NULL)
    {
        cloneNode->arb = oldToNewNode[originalNode->arb];
    }
    return clonehead;
}