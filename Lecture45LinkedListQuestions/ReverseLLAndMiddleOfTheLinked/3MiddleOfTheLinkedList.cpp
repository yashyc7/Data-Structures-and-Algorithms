#include <iostream>
using namespace std;
int getlength(node *&head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

node *findMiddle(node *head)
{

    int len = getlength(head);
    int ans = (len / 2);
    node *temp = NULL;
    node *temp = head;
    int cnt = 0;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    return temp;
}
node *getMiddle(node *& head)
{

if(head==NULL || head->next==NULL)
{
    return NULL;
}
//2 nodes
if(head->next->next=NULL)
{
    return head->next;
}
node *slow=head;
node *fast=head->next;
while(fast!=NULL)
{
    fast=fast->next;
    if(fast!=NULL)
    {
        fast=fast->next;
    }
    slow=slow->next;
}
return slow;
}


int main()
{

    return 0;
}