#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};
void InsertNode(int *&tail, int element, int d)
{
    node *NodeToInsert = new node(d);
    tail = NodeToInsert;
    NodeToInsert->next = NodeToInsert;
}
int main()
{

    return 0;
}