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

int find_len(node *head){
    if (head->next==NULL)
    {
        /* code */
        return 1;
    }
    node* temp=head;
    int count =0;
    while (temp!=0)
    {
        /* code */
        count++;
        temp=temp->next;
    }
    return count;
}
void find_mid(int k,node* head){
    int count=1;
    node* temp=head;
    while (count<k)
    {
        /* code */
        count++;
       temp=temp->next; 
    }
    cout<<"Middle element is :"<<temp->data<<endl;
    cout<<"mid element is at :"<<temp->next<<endl;
}
int main(){
    node* head=0;
    node* temp;
    int choice;
    while (choice)
    {
        /* code */
        int x;
        cout<<"enter data : ";
        cin>>x;
        
        node *newnode=new node(x);

        if (head==0)
        {
            /* code */
            temp=head=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;

        }
        cout<<"enter choice : ";
        cin>>choice;
    }
    print(head);

    int len=find_len(head);
    cout<<endl;
    cout<<"length of linked list = "<<len<<endl;
    int position=len/2+1;
    find_mid(position,head);
}