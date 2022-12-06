#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};
void print(node *head)
{
    node *temp = head;

    while (temp != 0)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    node *head = 0;
    node *temp;
    int choice;
    while (choice)
    {
        /* code */
        int x;
        cout << "enter data" << endl;
        cin >> x;

        node *newnode = new node(x);

        if (head == 0)
        {
            /* code */
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "enter choice :";
        cin >> choice;
    }
    print(head);



 int y;
    cout << endl;
    cout << "enter data to insert at the end of ll : " << endl;
    cin >> y;
    node *newnode2 = new node(y);
    temp=head;
    while (temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode2;

    
    print(head);
}