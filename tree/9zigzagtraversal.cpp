#include <iostream>
#include <queue>
#include<vector>

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
void zigzag_traversal(node*root){

    vector<int > result;
    queue<node*> q;
    q.push(root);

    bool LTR=true;

    while (!q.empty())
    {
        /* code */
        int size=q.size();
        vector<int> ans(size);

        for (int  i = 0; i < size; i++)
        {
            /* code */
            node *frontnode=q.front();
            q.pop();

            int index=LTR ? i : size-i-1;

            ans[index]=frontnode->data;

            if (frontnode->left)
            {
                /* code */
                q.push(frontnode->left);

            }
            if (frontnode->right)
            {
                q.push(frontnode->right);

            }
        }
        LTR = !LTR;

        for(auto i: ans){

            result.push_back(i);
        }
        

    }
    for(auto i : result){
        cout<<i<<" ";
    }
}
int main(){
    node* root=NULL;
    root=buildtree(root);

    print_levels(root);

    cout<<"zig gag traversal of tree : "<<endl;

    zigzag_traversal(root);

}