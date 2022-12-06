#include<vector>
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

bool check_palindrome(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    while (s<=e)
    {
        /* code */
        if (arr[s]!=arr[e])
        {
            /* code */
            return false;
        }
        s++;
        e--;

    }
    return 1;
}
int main()
{

    node *head= 0;
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
    cout<<"linked list : ";
    print(head);

    vector<int> arr;
    temp=head;

    while (temp!=0)
    {
        /* code */
        arr.push_back(temp->data);
        temp=temp->next;

    }
    cout<<endl;
    cout<<arr.size()<<endl;
    if (check_palindrome(arr))
    {
        /* code */
        cout<<"entered linked list is palindrome "<<endl;
    }
    else{
         cout<<"entered linked list is not palindrome "<<endl;
    }
    
}
// method 2...
// 