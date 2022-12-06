// Q...if height of left subtree - height of right subtree is less than equal to zero then it is balanced tree.
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


bool check_balanced(node* root){
    if (root==NULL)
    {
        /* code */
        return true;
    }
    bool left=check_balanced(root->left);
    bool right=check_balanced(root->right);

    bool difference= abs (height(root->left) - height(root->right)) <=1;

    if (left && right && difference)
    {
        /* code */
        return true;
    }
    else{
        return false;
    }
    

    
}
int main()
{

    node *root = NULL;
    root = buildtree(root);
    // cout<<endl;
    if(check_balanced(root)){
        cout<<"tree is balanced :)"<<endl;
    }
    else{
        cout<<"tree is not balanced :("<<endl;
    }

}