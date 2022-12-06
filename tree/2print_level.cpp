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

void print_level(node *root, int k)
{

    if (root == NULL)
    {
        /* code */
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    int level = 0;
    
    while (!q.empty())
    {
        /* code */
        node *Node = q.front();
        q.pop();
        if (Node != NULL)
        {
            /* code */
            if (level == k)
            {
                /* code */
                cout << Node->data << " ";
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

int level_sum(node* root,int k){

    if (root == NULL)
    {
        /* code */
        return -1;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum=0;
    while (!q.empty())
    {
        /* code */
        node *Node = q.front();
        q.pop();
        if (Node != NULL)
        {
            /* code */
            if (level == k)
            {
                /* code */
                // cout << Node->data << " ";
                sum+=Node->data;
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
int main(){

    // 3 2 1 -1 -1 5 -1 -1 7 8 -1 -1 -1
    node *root=NULL;
    root=buildtree(root);

    // print level 2;
    print_level(root,2);
    cout<<endl;
    cout<<level_sum(root,2);
    cout<<endl;
}