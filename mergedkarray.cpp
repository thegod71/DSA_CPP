#include<iostream>
#include<queue>
using namespace std;
class info{
    public:
    int data;
    int rowindex;
    int colindex;
    info(int a,int b,int c){
        this->data=a;
        this->rowindex=b;
        this->colindex=c;
    }
};
class compare{
    public: 
    //always check spelling of  opertor
    bool operator()(info* a,info* b){
        return a->data > b->data;
    } 
};
void mergekarray(int arr[][4],int n,int k,vector<int>&ans){
    priority_queue<info*,vector<info*>,compare>pq;
    for(int row=0;row < k;row++){
    int element=arr[row][0];
    info*temp=new info(element,row,0);
    pq.push(temp);
    }
    while(!pq.empty()){
        info*temp=pq.top();
        pq.pop();
        int topdata=temp->data;
        int toprow=temp->rowindex;
        int topcol=temp->colindex;
        ans.push_back(topdata);
        if(topcol+1 < n){
            info*newinfo=new info(arr[toprow][topcol+1],toprow,topcol+1);
            pq.push(newinfo);
        }
    }
}
int main(){
    int arr[3][4]={
        {2,4,6,8},
        {3,7,5,9},
        {1,7,9,10}
    };
    int n=4;
    int k=3;
    vector<int>ans;
    mergekarray(arr,n,k,ans);
for(int i=0;i<ans.size();i++){
    cout<<ans[i];
    cout<<endl;
}
return 0;
}