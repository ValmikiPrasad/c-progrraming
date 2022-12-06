#include <iostream>
#include<map>
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
void check_loop(node *head){

    map<node*,bool> visited;

    node* temp=head;
    while (temp!=NULL)
    {
        /* code */
        if (visited[temp]==true)
        {
            /* code */
            cout<<"yes ,there is a loop "<<endl;
            cout<<"starting node of loop is : "<<temp->data<<endl;
            break;
        }        
        visited[temp]=true;
        temp=temp->next;
    }

    cout<<"after removing loop : "<<endl;

    node *tempy=temp;

    while (tempy->next!=temp)
    {
        /* code */
        tempy=tempy->next;

    }
    tempy->next=NULL;

    print(head);

    if (temp==NULL)
    {
        /* code */
        cout<<"no ,there is no loop "<<endl;
        return;
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
    // pointing to second node :)
    temp->next = head->next;
    check_loop(head);

}