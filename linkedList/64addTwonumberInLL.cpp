#include <vector>
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
void reverseLinked(node *&head)
{
    node *previous = NULL;
    node *current;
    node *nextnode_;
    current = nextnode_ = head;
    while (nextnode_ != 0)
    {
        /* code */
        nextnode_ = current->next;
        current->next = previous;
        previous = current;
        current = nextnode_;
    }
    head = previous;
}
void addLinkedList(node *head1, node *head2)
{
    node *head = NULL;
    node *temp;
    int carry = 0;
    node *curr1 = head1;
    node *curr2 = head2;
    while (curr1 != 0 && curr2 != 0)
    {
        /* code */

        int value = curr1->data + curr2->data + carry;
        int digit = value % 10;
        carry = value / 10;

        node *newnode = new node(digit);

        if (head == NULL)
        {
            /* code */
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    while (curr1 != 0)
    {
        /* code */
        int value = curr1->data + carry;
        int digit = value % 10;
        carry = value / 10;

        node *newnode = new node(digit);

        temp->next = newnode;
        temp = newnode;
         curr1 = curr1->next;
    }
    while (curr2 != 0)
    {
        /* code */
        int value = curr2->data + carry;
        int digit = value % 10;
        carry = value / 10;
        node *newnode = new node(digit);
        temp->next = newnode;
        temp = newnode;
        curr2 = curr2->next;
    }
    if (carry!=0)
    {
        /* code */
        node *newnode = new node(carry);
        temp->next = newnode;
        temp = newnode;
    }
    
    reverseLinked(head);
    cout << endl;
    print(head);
}
int main()
{

    node *head1 = 0;
    node *temp1;
    int choice1;
    while (choice1)
    {
        /* code */
        int x;
        cout << "enter data" << endl;
        cin >> x;

        node *newnode = new node(x);

        if (head1 == 0)
        {
            /* code */
            head1 = temp1 = newnode;
        }
        else
        {
            temp1->next = newnode;
            temp1 = newnode;
        }
        cout << "enter choice :";
        cin >> choice1;
    }
    cout << "First linked list : ";
    print(head1);

    cout << endl;

    node *head2 = 0;
    node *temp2;
    int choice2;
    while (choice2)
    {
        /* code */
        int x;
        cout << "enter data" << endl;
        cin >> x;

        node *newnode = new node(x);

        if (head2 == 0)
        {
            /* code */
            head2 = temp2 = newnode;
        }
        else
        {
            temp2->next = newnode;
            temp2 = newnode;
        }
        cout << "enter choice :";
        cin >> choice2;
    }
    cout << "Second linked list : ";
    print(head2);

    reverseLinked(head1);
    cout << endl;
    cout << "First linked list after reverse : ";
    cout << endl;
    print(head1);

    reverseLinked(head2);
    cout << endl;
    cout << "second linked list after reverse : ";
    cout << endl;
    print(head2);
    addLinkedList(head1, head2);
}