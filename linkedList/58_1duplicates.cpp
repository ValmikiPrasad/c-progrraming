// Q...removing duplicates from sorted LL;

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
void remove_duplicates(node *head){
    node* current=head;
    while (current!=0 && current->next!=0)
    {
        /* code */
        if (current->data==current->next->data)
        {
            /* code */
            node* next_next=current->next->next;
            node *to_delete=current->next;
            current->next=next_next;
            delete(to_delete);
        }
        else
        {
            current=current->next;
        }
        
        
    }
    cout<<endl;
    cout<<"linked list after removing duplicates : ";
    print(head);
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
    cout<<"linked list : ";
    print(head);
    remove_duplicates(head);

}