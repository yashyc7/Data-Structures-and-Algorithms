Node *reverseLinkedList(node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = curr->next;
    }
    return prev;
}

// recursive Solution

void reverse(Node *head, Node *curr, Node *prev)
{ 
    if (curr == NULL)
    {
        head = prev;
        return;
    } // base case

    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node *reverseLinkedList(node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}