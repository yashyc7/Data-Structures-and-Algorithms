Node kReverse(Node *head, int k)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    // step1:reverse the first k nodes
    Node *forward = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    while (count < k || curr != NULL || curr->next != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // recursion will see the further
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }
    // step 3 return head of the reversed list
    return prev;
}
