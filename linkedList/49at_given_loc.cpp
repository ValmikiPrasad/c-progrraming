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

    int k;
    cout<<endl;
    cout<<"enter the position (after which) : ";
    cin>>k;
    int count=1;
    temp=head;
    while (count<k)
    {
        /* code */
        count++;
        temp=temp->next;
    }
     int y;
        cout << "enter data" << endl;
        cin >> y;

        node *newnode1 = new node(y);
    newnode1->next=temp->next;
    temp->next=newnode1;

    print(head);

}