#include <iostream>
using namespace std;
bool checkPallindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head;
    int count = 0;
    // traversing array to find the size
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    int arr[count]; // size count of array is created
    temp = head;
    int i = 0;
    while (temp != NULL && count != i)
    {
        arr[i] = temp->data;
        i++;
        temp = temp->next;
    } // array is filled with data
    int s = 0;
    int e = count - 1;
    while (s <= e) // checking if the array is pallindrome or not
    {
        if (arr[s] == arr[e])
        {
            s++;
            e--;
        }
        else
            return false;
    }

    if (s > e)
    {
        return true;
    }
}

//  Approach 2
Node *reverse(Node *temp)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node *getMidddle(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL || fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
bool checkPallindrome(Node *head)
{
    // getting mid of the linked list
    Node *middle = getMiddle(head);
    Node *temp = middle->next;
    middle->next = reverse(temp);
    // step 3 compare both halfs
    Node *head1 = head;
    Node *head2 = middle->next;
    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    Node *temp = middle->next;
    middle->next = reverse(temp);
    return true;
}
