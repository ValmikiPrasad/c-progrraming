// method..1

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

    temp = head;
    int zero = 0;
    int ones = 0;
    int twos = 0;

    while (temp != 0)
    {
        /* code */
        if (temp->data == 0)
        {
            /* code */
            zero++;
        }
        else if (temp->data == 1)
        {
            /* code */
            ones++;
        }
        else
        {
            twos++;
        }
        temp = temp->next;
    }
    cout << "\n zeroes :" << zero << " ones :" << ones << " twoes :" << twos;

    temp = head;

    while (zero!=0)
    {
        /* code */
        temp->data=0;
        temp=temp->next;
        zero--;
    }
    while (ones!=0)
    {
        /* code */
        temp->data=1;
        temp=temp->next;
        ones--;
    }
    while (twos!=0)
    {
        /* code */
        temp->data=2;
        temp=temp->next;
        twos--;
    }

    cout << endl;
    print(head);
}

// method 2...
