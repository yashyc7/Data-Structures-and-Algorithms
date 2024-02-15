Node *removeDuplicates(Node *head)
{
    // write your code here

    Node *curr = head;
    while (curr != NULL || curr->next != NULL)
    {
        Node *temp = curr->next;
        while (temp->next != NULL)
        {
            if (temp->data == curr->data)
            {
                Node *n = temp->next;
                temp->next = temp->next->next;
                delete n;
            }
            else
            {

                temp = temp->next;
            }
        }

        curr = curr->next;
    }

    return head;
}