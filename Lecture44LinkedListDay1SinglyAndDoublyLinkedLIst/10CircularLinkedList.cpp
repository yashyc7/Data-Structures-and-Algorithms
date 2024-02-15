#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Node is deleted with data " << value << endl;
    }
};
void Insert(node *&tail, int element, int d)
{
    // assuming the element is present in the list
    // empty list
    if (tail == NULL)
    {
        node *newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // non empty list
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        } // element is found after that
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void DeletingANode(node *& tail, int element)
{
   node *prev=NULL;
   node *curr=tail;
 if(tail==NULL)
 {
    cout<<"The list is empty ! please check it again ";
 }
   while(curr->data!=element)
   {
    prev=curr;
    curr=curr->next;
   } 
   prev->next=curr->next;
   curr->next=NULL;
   delete curr;
}
void print(node *&tail)
{
    node *temp = tail;
    do
    {
        /* code */
        cout << tail->data << " ";
        tail = tail->next;
    } while (
        tail != temp);
    cout << endl;
}
int main()
{
    node *tail = NULL;
    Insert(tail, 5, 3);
    print(tail);
    Insert(tail, 3, 5);
    print(tail);
    Insert(tail, 5, 9);
    print(tail);
    Insert(tail, 9, 10);
    print(tail);
    Insert(tail, 3, 4);
    print(tail);
    DeletingANode(tail,10);
    print(tail);
    DeletingANode(tail,9);
    print(tail);
    return 0;
}