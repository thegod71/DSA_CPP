#include<iostream>
using namespace std;
class trienode{
    public:
    char val;
    bool istreminal;
    trienode *children[26];
    trienode(char ch){
        this->val=ch;
        for (int i =0; i < 26; i++)
        {
             children[i]=NULL;
        } 
       this->istreminal=false;
    }
};
void insertion(trienode*root,string s){
    //cout<<s<<endl;
    if(s.length()==0){
        root->istreminal=true;
        return ;
    }
    char ch=s[0];
    int index=ch-'a';
    trienode *child;
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        child=new trienode(ch);
        root->children[index]=child;
    }
    insertion(child,s.substr(1));
}
void deletion(trienode*root,string s){
    //cout<<s<<endl;
    if(s.length()==0){
        root->istreminal=false;
        return;
    }
    char ch=s[0];
    int index=ch-'a';
    trienode *child;
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        return ;
    }
    deletion(child,s.substr(1));
}
bool searching(trienode*root,string word){
    if(word.length()==0){
        return root->istreminal;
    }
    char ch=word[0];
    int index=ch-'a';
    trienode *child;
    if(root->children[index] != NULL){
        child=root->children[index];
    }
    else{
        return false;
    }
   bool ans1= searching(child,word.substr(1));
return ans1;
}
int main(){
    trienode *root=new trienode('-');
    insertion(root,"gaurav");
    insertion(root,"gv");
    insertion(root,"gaav");
    insertion(root,"garav");
    insertion(root,"gav");
    insertion(root,"gurav");
    insertion(root,"garav");
    insertion(root,"gaa");
    string word="gaurav";
    string word1="gurav";
    deletion(root,word1);
    bool ans=searching(root,word);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }


    return 0;
}