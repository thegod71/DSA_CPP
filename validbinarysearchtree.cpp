 bool valid(TreeNode*root,long long int lower,long long int upper){
        if(root==NULL){
         return true;
      }
      bool cond1=root->val>lower;
      bool cond2=root->val<upper;
      bool leftans=valid(root->left,lower,root->val);
      bool rightans=valid(root->right,root->val,upper);
      if(cond1 && cond2 && leftans && rightans){
          return true;
      }
      else{
          return false;
      }        
    }
    bool isValidBST(TreeNode* root) {
        long long int upper=INT_MAX*10;
        long long int lower=INT_MIN*10;
    return valid(root,lower,upper);  
    }
};