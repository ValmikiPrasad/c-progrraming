// floyd cycle detection algorithm
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
void check_loop(node *head)
{

    node * slow;
    node *fast;
    slow=fast=head;
    while (slow!=0&& fast!=0 && fast->next!=0)
    {
        /* code */
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast)
        {
            /* code */
            cout<<"yes , loop is present";
            break;
        }
        
    }
    if (slow!=fast)
    {
        /* code */
        cout<<"no , loop is present"<<endl;
    }
    
    // detecting from where loop is started...
    // concept... dist. travelled by fast pointer =2*(distance travelled by slow pointer)
    // A+B=(x-2y)C...or...A+B=k*C;

    if (slow==fast)
    {
        /* code */
        slow=head;
        while (slow!=fast)
        {
            /* code */
            slow=slow->next;
            fast=fast->next;
        }
        cout<<"\n loop starts at : "<<slow->data<<endl;
        
    }
    
    

}
node *find_starting_node(node *head){
    node * slow;
    node *fast;
    slow=fast=head;
    while (slow!=0&& fast!=0 && fast->next!=0)
    {
        /* code */
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast)
        {
            /* code */
            // cout<<"yes , loop is present";
            break;
        }
        
    }

    // detecting from where loop is started...
    // concept... dist. travelled by fast pointer =2*(distance travelled by slow pointer)
    // A+B=(x-2y)C...or...A+B=k*C;

    if (slow==fast)
    {
        /* code */
        slow=head;
        while (slow!=fast)
        {
            /* code */
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
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
    // pointing to second node :)
    temp->next = head->next;

    cout<<endl;
    check_loop(head);
    // removing loop;
    // 1...fiind starting node of loop:

    node *slow=find_starting_node(head); 

    node * tempy=slow->next;

    while (tempy->next!=slow)
    {
        /* code */
        tempy=tempy->next;
    }
    tempy->next=NULL;
    // cout<<tempy->data;
    // // checking loop
    check_loop(head);
     print(head);

}