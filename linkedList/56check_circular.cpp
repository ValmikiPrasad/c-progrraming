// ll is circular not;
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
bool check_circular(node *head)
{

    node *temp = head->next;

    while (temp != NULL && temp != head)
    {
        /* code */
        temp = temp->next;
    }
    if (temp == NULL)
    {
        /* code */
        return 0;
    }
    if (temp == head)
    {
        /* code */
        return 1;
    }
    return 0;
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
        cout << "enter data : ";
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

    // creating circular :)

    temp = head;
    while (temp->next != 0)
    {
        /* code */
        temp = temp->next;
    }

    temp->next = head;

    cout<<endl;
    if (check_circular(head))
    {
        cout << "entered ll is circular";
    }
    else
    {
        cout << "entered ll is not circular";
    }
    cout<<endl;
}