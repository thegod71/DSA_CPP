#include<iostream>
#include<vector>
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
void printleftview(node *root,int level,vector<int>&leftview){
    if(root==NULL){
        return ;
    }
    if(level==leftview.size()){
        leftview.push_back(root->data);
    }
    printleftview(root->left,level+1,leftview);
    printleftview(root->right,level+1,leftview); 
}
int main(){
    node* root=createt();
    vector<int>leftview;
    int level=0;
    printleftview(root,level,leftview);
for (int i = 0; i < leftview.size(); i++)
{
    cout<<leftview[i]<<" ";
}

    // cout<<"the inoreder is";
    // inorder(root);
    // cout<<"the post order is"<<endl;
    // postorder(root);

    return 0;
}