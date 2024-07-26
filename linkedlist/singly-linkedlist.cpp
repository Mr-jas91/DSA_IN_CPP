#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAthead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (temp == NULL)
    {
        temp->next = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = n;
}

int main()
{
    node *head = NULL;
    insertAthead(head, 2);
    return 0;
}