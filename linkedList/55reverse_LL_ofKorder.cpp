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
node * reverse_k_group(node *&head,int k){
    // base case
    if(head==NULL){
        return NULL;
    }
    // step 1...reverse firsst k group
    node *previous=NULL;
    node *current =head;
    node* next;
    int count=0;
    while (current!=NULL && count<k)
    {
        /* code */
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
        count++;
    }
    // step 2...recusive call
    if (next!=0)
    {
        /* code */
        head->next=reverse_k_group(next,k);

    }
    return previous;


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
    
    int k;
    cout<<"enter order : ";
    cin>>k;

    node * p=reverse_k_group(head,k);
    print(p);
}