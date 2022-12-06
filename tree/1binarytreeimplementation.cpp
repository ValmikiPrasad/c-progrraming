#include <iostream>
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

node *buildtree(node *root)
{
    int data;
    cout<<"enter the data : "<<endl;
    cin>>data;
    root=new node(data);

    if (data==-1)
    {
        /* code */
        return NULL;

    }
    cout<<"enter the data for inserting left of : "<< data <<endl;
    root->left=buildtree(root->left);

    cout<<"enter the data for inserting right of : "<< data <<endl;
    root->right=buildtree(root->right);

    return root;
    
}
void print_node(node *root,int i){

    if (root==NULL)
    {
        /* code */
        return;
    }
    if (i==1)
    {
        /* code */
        cout<<root->data<<" ";
        return;
    }
    else if (i>1)
    {
        /* code */
        print_node(root->left,i-1);
        print_node(root->right,i-1);

    }   
    
}

void print_levelorder(node* root){

        if (root==NULL)
        {
            /* code */
            return;
        }
        queue<node*> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            /* code */
            node *Node=q.front();
            q.pop();

            if (Node!=NULL)
            {
                /* code */
                cout<<Node->data<<" ";

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
            }
            
            
        }
        
        
}
int main()
{

    node *root = NULL;
    root = buildtree(root);
  
    int h=3;
    for (int i = 1; i <= h; i++)
    {
        /* code */
        print_node(root,i);
        cout<<endl;
    }

    print_levelorder(root);
    
    
}