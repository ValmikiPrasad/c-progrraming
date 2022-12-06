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

int solve(Node* root,bool &bal){
       if(root==NULL){
           return 0;
       }
       int a=solve(root->left,bal);
       int b=solve(root->right,bal);
       if(root->data!=a+b && a!=0 && b!=0){
           bal=false;
       }
       
       return root->data+a+b;
   }
   bool isSumTree(Node* root)
   {
        bool bal=true;
        solve(root,bal);
        return bal;
   }