#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node *next;

    node (int n){
        this->data=n;
        this->next=NULL;
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
int main(){

    node* head=0;
    node* temp;

    int choice;
    while (choice)
    {
        cout<<"enter data"<<endl;
        int x;
        cin>>x;

        node *newnode=new node(x);
        
        if (head==0)
        {
        
            head=temp=newnode;

        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"enter choice :"<<endl;
        cin>>choice;
    }
    print(head);

    node*pre;
    node* temp1=head;
    while (temp1->next!=0)
    {
        /* code */
        pre=temp1;
        temp1=temp1->next;
    }
    cout<<"last element is : "<<temp1->data<<endl;
    pre->next=NULL;
    print(head);
    free(temp1);
}