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
void left_traversal(node *root, vector<int> &ans)
{

    if (root == NULL)
    {
        /* code */
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        /* code */
        return;
    }

    ans.push_back(root->data);

    if (root->left)
    {
        /* code */
        left_traversal(root->left, ans);
    }
    else
    {
        left_traversal(root->right, ans);
    }
}
void leaf_traversal(node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        /* code */
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        /* code */
        ans.push_back(root->data);
        return;
    }

    leaf_traversal(root->left, ans);
    leaf_traversal(root->right, ans);
}
void right_traversal(node *root, vector<int> &ans)
{

    if (root == NULL)
    {
        /* code */
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        /* code */
        return;
    }
    if (root->right)
    {
        /* code */
        right_traversal(root->right, ans);
    }
    else
    {
        right_traversal(root->left, ans);
    }

    ans.push_back(root->data);
}
int main()
{
    node *root = NULL;
    root = buildtree(root);

    print_levels(root);

    if (root == NULL)
    {
        /* code */
        return 0;
    }

    vector<int> ans;
    ans.push_back(root->data);

    left_traversal(root->left, ans);
    cout << endl;

    leaf_traversal(root->left, ans);
    leaf_traversal(root->right, ans);

    right_traversal(root->right, ans);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    
}