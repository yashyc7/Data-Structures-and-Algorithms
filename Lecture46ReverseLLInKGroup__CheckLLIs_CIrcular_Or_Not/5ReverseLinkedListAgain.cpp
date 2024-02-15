Node *reverseLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    // base case
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}