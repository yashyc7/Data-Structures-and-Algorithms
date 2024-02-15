#include <iostream>
using namespace std;

Node *sortList(Node *head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    while (temp != NULL)
    {
        if (temp->data == zeroCount)
        {
            zeroCount++;
        }
        else if (temp->data == oneCount)
        {
            oneCount++;
        }
        else if (temp->data == twoCount)
        {
            twoCount++;
        }
        temp = temp->data;
    }

    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zerocount--;
        }
        else if (onecount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twocount--;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{

    return 0;
}