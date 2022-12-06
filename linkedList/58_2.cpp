// remove duplicates from unsorted linked list:)

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
void remove_duplicates(node* start)
{
    node *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    while (ptr1 != NULL && ptr1->next != NULL) {

        ptr2 = ptr1;
        while (ptr2->next != NULL) {
            
            if (ptr1->data == ptr2->next->data) {
                
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else {
                 ptr2 = ptr2->next;
            }
               
        }
        ptr1 = ptr1->next;
    }
     cout<<endl;
    cout<<"linked list after removing duplicates : ";
    print(start);
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