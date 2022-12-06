// 
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
bool check_identical(node* r1,node*r2){
    if (r1==NULL &&r2==NULL)
    {
        /* code */
        return true;
    }
    if (r1==NULL && r2!=NULL)
    {
        /* code */
        return false;
    }
    if (r1!=NULL &&r2==NULL)
    {
        /* code */
        return false;
    }
    
    bool left=check_identical(r1->left,r2->left);
    bool right=check_identical(r1->right,r2->right);

    bool check=r1->data==r2->data;

    if (left && right && check)
    {
        /* code */
        return true;

    }
    else{
        return false;
    }
    
    
    
}
int main(){
    node* root1=NULL;
    buildtree(root1);

    node* root2=NULL;
    buildtree(root2);

    if(check_identical(root1,root2)){
        cout<<"es,both tree are identical :)"<<endl;

    }
    else{
        cout<<"Na,trees are identical :)"<<endl;
    }

}