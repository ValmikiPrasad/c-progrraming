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
int count_nodes(node* root){
    if (root == NULL)
    {
        /* code */
        return 0;
    }
    return count_nodes(root->left) +count_nodes(root->right)+1;
}
int sum_nodes(node* root){
    if (root == NULL)
    {
        /* code */
        return 0;
    }
    return sum_nodes(root->left) +sum_nodes(root->right)+root->data;
}
int main(){

    // 3 2 1 -1 -1 5 -1 -1 7 9 -1 -1 -1
    node *root=NULL;
    root=buildtree(root);

    cout<<count_nodes(root);
    cout<<endl;
    cout<<sum_nodes(root);
    cout<<endl;
}