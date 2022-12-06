// Q...
// construct a tree when inorder and postorder traversal of tree is given;
#include<iostream>
#include<queue>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {

        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void print_levels(node *root)
{

    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        /* code */
        node *Node = q.front();
        q.pop();
        if (Node != NULL)
        {
            /* code */
            cout << Node->data << " ";

            if (Node->left)
            {
                /* code */
                q.push(Node->left);
            }
            if (Node->right)
            {
                /* code */
                q.push(Node->right);
            }
        }
        else if (!q.empty())
        {
            /* code */
            q.push(NULL);
            cout<<endl;
        }
    }
}

int find_position(int in[],int element,int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (in[i]==element)
        {
            /* code */
            return i;
        }
        
    }
    return -1;
    
}
node* solve(int in[],int post[],int &index ,int inorder_start,int inorder_end,int n){

    if (index<0 || inorder_start>inorder_end)
    {
        /* code */
        return NULL;
    }
    int element=post[index--];
    node* root=new node(element);
    int position=find_position(in,element,n);
    
    root->right=solve(in,post,index,position+1,inorder_end,n);
    root->left=solve(in,post,index,inorder_start,position-1,n);
   
    return root;
}
int main(){
    int x;
    cout<<"enter the size : ";
    cin>>x;
    int post[x];
    cout<<"enter the preorder traversal of tree: ";
    for (int  i = 0; i < x; i++)
    {
        /* code */
        cin>>post[i];
    }
    int in[x];
    cout<<"enter the inorder traversal of tree: ";
    for (int  i = 0; i < x; i++)
    {
        /* code */
        cin>>in[i];
    }
    int postorderindex=x-1;
    node* roott=solve(in,post,postorderindex,0,x-1,x);
    print_levels(roott);
    
}