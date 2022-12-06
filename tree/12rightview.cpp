#include <iostream>
#include <queue>
#include <vector>

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
    cout << "enter the data : " << endl;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        /* code */
        return NULL;
    }
    cout << "enter the data for inserting left of : " << data << endl;
    root->left = buildtree(root->left);

    cout << "enter the data for inserting right of : " << data << endl;
    root->right = buildtree(root->right);

    return root;
}
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
        }
    }
}
void right_view(node*root){

    vector<int> result;
    queue<node*> q;
    q.push(root);

    while (!q.empty())
    {
        /* code */
        int size=q.size();
        node* req=q.back();

        result.push_back(req->data);

        for (int i = 0; i < size; i++)
        {
            /* code */
            node* Node=q.front();
            q.pop();
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
        
    }
    for(auto i: result){
        cout<<i<<endl;
    }
    
}

int main()
{
    node *root = NULL;
    root = buildtree(root);

    print_levels(root);
    cout<<"right_view of tree : "<<endl;
    right_view(root);
}