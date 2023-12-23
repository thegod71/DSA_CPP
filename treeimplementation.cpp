#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int val){
        this->data=val;
        this->right=NULL;
        this->left=NULL;
    }
};
node* createt(){
    
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    
    node* root=new node(data);
    cout<<"enter the left child ";
    root->left=createt();
    cout<<"Enter the right child ";
    root->right=createt();
    
    return root;

}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return ;
    }
          postorder(root->left);  
      postorder(root->right);
    cout<<root->data;
  
}
int main(){
    node* root=createt();
    cout<<"the inoreder is";
    inorder(root);
    cout<<"the post order is"<<endl;
    postorder(root);
    return 0;
}