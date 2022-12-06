#include <iostream>
#include <queue>
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
void print_levels(node* root){

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
int count_nodes(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int count=0;
    while (!q.empty())
    {
        /* code */
        node *Node=q.front();
        q.pop();
        if (Node!=NULL)
        {
            /* code */
            count++;

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
    return count;
    
}
int count_leaf(node* root){
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int count=0;
    while (!q.empty())
    {
        /* code */
        node *Node=q.front();
        q.pop();
        if (Node!=NULL)
        {
            /* code */

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
            if (Node->right==NULL && Node->left==NULL)
            {
                /* code */
                count++;
            }
            

        }
        else if (!q.empty())
        {
            /* code */
            q.push(NULL);
        }
            
    }
    return count;
    
}
int sum_all_nodes(node*root){
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int sum=0;
    while (!q.empty())
    {
        /* code */
        node *Node=q.front();
        q.pop();
        if (Node!=NULL)
        {
            /* code */
            sum+=Node->data;

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
    return sum;
}
void print_level(node* root,int k){

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    while (!q.empty())
    {
        /* code */
        node *Node=q.front();
        q.pop();
        if (Node!=NULL)
        {
            /* code */
            if (level==k)
            {
                /* code */
                cout<<Node->data<<" ";
            }
            

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
            level++;
        }
            
    }
    
}
int sum_at_level(node* root,int k){

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int sum=0;
    int level=0;
    while (!q.empty())
    {
        /* code */
        node *Node=q.front();
        q.pop();
        if (Node!=NULL)
        {
            /* code */
            if (level==k)
            {
                /* code */
                sum=sum+Node->data;
            }
            

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
            level++;
        }
            
    }
    return sum;
}
int main()
{

    node *root = NULL;
    root = buildtree(root);

    print_levels(root);
    cout<<endl;

    cout<<"number of nodes in tree: ";
    cout<<count_nodes(root);
    cout<<endl;

    cout<<"number of leaf nodes : ";
    cout<<count_leaf(root);
    cout<<endl;

    cout<<"sum of all nodes in tree: ";
    cout<<sum_all_nodes(root);
    cout<<endl;

    int k;
    cout<<"enter the value of k : ";
    cin>>k;
    print_level(root,k);
    cout<<endl;

    cout<<"sum of nodes at level k : ";
    cout<<sum_at_level(root,k);
    cout<<endl;
    

}