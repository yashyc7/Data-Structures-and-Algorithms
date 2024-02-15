Node *sort(Node *head)
{

    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;
    Node *onehead = new Node(-1);
    Node *onetail = onehead;
    Node *twohead = new Node(-1);
    Node *twotail = twohead;

    Node *curr = head;
    while (curr != head)
    {
        int value = curr->data;
        if (value == 0)
        {
            InsertAtTail(zerotail, curr);
        }
        else if (value == 1)
        {
            insertAtTail(onetail, curr);
        }
        else if (value == 2)
        {
            InsertAtTail(twotail, curr);
        }
    }
    // Merging these three sublists

    if (onehead->next != NULL)
    {
        zerotail->next = onehead->next;
    }
    else
    {
        zerotail->Next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next = NULL;
    onetail->next = NULL;
    twotail->next = NULL;
    Node *ptr = zerohead->next;
    delete twotail;
    delete onetail;
    delete zerohead;
    return ptr;
}

void InsertAtTail(Node *&tail, Node *curr)
{

    tail->next = curr;
    tail = curr;
    tail->next = NULL;
}