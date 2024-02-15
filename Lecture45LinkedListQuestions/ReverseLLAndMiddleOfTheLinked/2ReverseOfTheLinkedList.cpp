#include <iostream>
using namespace std;
class node
{

    int data;
    node *next = NULL;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void reverseTheLinkedList(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "Already reversed since the element is not present or only one element is present in the list";
    }
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

// RECURSIVE SOLUTION

void reverseLinkedListUsingRecursion(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    if (curr == NULL)
    {
        return;
    }
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    reverseLinkedListUsingRecursion(head);
    head = prev;
}

// another recursion solution
void reverseLLusingRecursionPart2(node *&head)
{
    // base case

    if (head == NULL || head->next == NULL)
    {
        return;
    }
    head->next->next = head;
    // it will return the head of the
    head->next = NULL;
}

int main()
{

    return 0;
}