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
int height(node*root){
    if (root==NULL)
    {
        /* code */
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);

    return(max(left,right)+1);
    

}
int main()
{

    node *root = NULL;
    root = buildtree(root);
    // cout<<endl;
    cout<<"height of tree :";
    cout<<height(root)<<endl;
}