// Q...
// construct a tree when inorder and preorder traversal of tree is given;
// inorder[] = {1 6 8 7}
// preorder[] = {1 6 7 8}
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
node* solve(int in[],int pre[],int &index ,int inorder_start,int inorder_end,int n){

    if (index>=n || inorder_start>inorder_end)
    {
        /* code */
        return NULL;
    }
    int element=pre[index++];
    node* root=new node(element);
    int position=find_position(in,element,n);
    
    root->left=solve(in,pre,index,inorder_start,position-1,n);
    root->right=solve(in,pre,index,position+1,inorder_end,n);

    return root;
}
int main(){
    int x;
    cout<<"enter the size : ";
    cin>>x;
    int pre[x];
    cout<<"enter the preorder traversal of tree: ";
    for (int  i = 0; i < x; i++)
    {
        /* code */
        cin>>pre[i];
    }
    int in[x];
    cout<<"enter the inorder traversal of tree: ";
    for (int  i = 0; i < x; i++)
    {
        /* code */
        cin>>in[i];
    }
    int preorderindex=0;
    node* roott=solve(in,pre,preorderindex,0,x-1,x);
    print_levels(roott);
    
}