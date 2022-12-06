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
    // deleting from begining
    cout<<endl;
    cout<<"deleting element , data : "<<head->data<<endl;
    node*temp1=head;
    head=head->next;
    print(head);
    free(temp1);
}
    