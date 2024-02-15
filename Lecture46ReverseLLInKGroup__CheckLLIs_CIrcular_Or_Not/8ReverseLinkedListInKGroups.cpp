#include <bits/stdc++.h>
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

Node *kReverse(Node *head, int k)
{
    // Write your code here.
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // step 1 reverse first k nodes
    Node *forward = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        count++;
        for ward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    if (forward != NULL)
    {
        head->next = kReverse(forward, k);
    }

    return prev;
}