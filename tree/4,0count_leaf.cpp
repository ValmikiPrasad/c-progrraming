// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;

//     }
// };
// node * build_tree(node* root){
//     int data;
//     cout<<"enter the data : ";
//     cin>>data;
//     root=new node(data);
    
//     if (data==-1)
//     {
//         /* code */
//         return NULL;

//     }
//     cout<<"enter the data for inserting left of : "<< data <<endl;
//     root->left=build_tree(root->left);

//     cout<<"enter the data for inserting right of : "<< data <<endl;
//     root->right=build_tree(root->right);

//     return root;
// }
// void inorder(node* root,int &count){

//     if (root==NULL)
//     {
//         /* code */
//         return ;
//     }
//     inorder(root->left);

//     if (root->left==NULL &&root->right==NULL)
//     {
//         /* code */
//         count++;
//     }
//     inorder(root->right);
    
// }
// int main(){
//     node* root=NULL;
//     root=build_tree(root);
//     int count=0;
//     inorder(root,count);
//     cout<<count;
// }