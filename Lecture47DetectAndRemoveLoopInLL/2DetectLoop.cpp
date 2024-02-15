#include <iostream>
using namespace std;
class node
{
public:
  int data;
  node *next;
  // constructor
  node(int d)
  {
    this->data = d;
    this->next = NULL;
  }
  ~node()
  {
    int value = data;
    if (this->next != NULL)
    {
      delete next;
      next = NULL;
    }
    cout << "Memory is free for node with the data " << value << endl;
  }
};
bool DetectLoop(node *head)
{

  if (head == NULL)
  {
    return false;
  }
  node *slow = head;
  node *fast = head;
  node *temp = head;
  while (slow != NULL && fast != NULL)
  {
    fast = fast->next;
    if (fast->next != NULL)
    {
      fast = fast->next;
    }
    slow = slow->next;
    if (slow == fast)
    {
      return true;
    }
  }
  return false;
}

node *HeadOfLoop(node *head)
{
  node *slow = head;
  node *fast = head->next;
  node *temp = head;
  while (slow != fast)
  {
    slow = slow->next;
    fast = fast->next;
  }
  if (slow == fast)
  {
    node *Instersection = slow;
  }
  while (temp != slow)
  {
    temp = temp->next;
    slow = slow->next;
  }

  return temp;
}

void DeleteLoop(node *head)
{

  node *temp = head;
  node *Intersect = HeadOfLoop(head);
  while (temp->next != Intersect)
  {
    temp = temp->next;
  }
  temp->next = NULL;
  return;
}
void Insertnode(node *&tail, int element, int d)
{
  // assumning that the element is present int thelist
  if (tail == NULL)
  {
    node *newnode = new node(d);
    tail = newnode;
    newnode->next = newnode;
  }
  else
  {

    node *curr = tail;
    while (curr->data != element)
    {
      curr = curr->next;
    }
    // element found;
    node *temp = new node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}
void print(node *tail)
{
  node *temp = tail;
  do
  {
    cout << tail->data << " ";
    tail = tail->next;
  } while (tail != temp);
  cout << " ";
}
void deletenode(node *&tail, int element)
{
  if (tail == NULL)
  {
    cout << "List is empty , please check again " << endl;
    return;
  }
  else
  {

    node *prev = tail;
    node *curr = prev->next;
    while (curr->data != element)
    {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    if (tail == curr)
    {
      tail = prev;
    }
    curr->next = NULL;
    delete curr;
  }
}
int main()
{
    node *tail = NULL;
    Insertnode(tail, 3, 5);
    Insertnode(tail, 5, 7);
    Insertnode(tail, 7, 9);
    Insertnode(tail, 9, 10);
    deletenode(tail, 5);
     if (DetectLoop(tail))
     {
         cout << "loop is present" << endl;
         cout << "After Deleting Loop";
         DeleteLoop(HeadOfLoop(tail));
         print(tail);
     }
     else
     {
         cout << "loop is absent";
     }

    print(tail);
    return 0;
}