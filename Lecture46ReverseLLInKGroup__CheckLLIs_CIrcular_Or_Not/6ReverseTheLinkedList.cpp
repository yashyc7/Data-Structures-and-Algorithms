#include <iostream>
using namespace std;

node *KReverseLinkedList(node *head, int k)
{

    node *curr = head;
    node *prev = NULL;
    node *forward = NULL;
    int count = 0;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (curr != NULL || count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if (forward != NULL)
    {
        head->next = KReverseLinkedList(forward);
    }
    return prev;
}

int main()
{

    return 0;
}