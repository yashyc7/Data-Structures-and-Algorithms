#include <iostream>
using namespace std;
Node *reverse1(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        // LINKED LIST IS OF SINGLE ELEMENT OR EMPTY
        return head;
    }
    Node *chotahead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;
    return chota head;
}
