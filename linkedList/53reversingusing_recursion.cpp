// reversing a singly linked list
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

void reverse(node *&head,node*current,node *previvous){

    if (current==NULL)
    {
        /* code */
        head=previvous;
        return;
    }
    node* forward=current->next;
    reverse(head,forward,current);
    current->next=previvous;
}
int main()
{

    node *head= 0;
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
    cout<<"linked list : ";
    print(head);

    // reversing a ll
    node* previous=NULL;
    node *current=head;

    reverse(head,current,previous);
    cout<<endl;
    cout<<"linked list after reversing : ";
    print(head);
}