#include<iostream> 
#include<stack>
#include<vector>
using namespace std;
vector<int>smaller(int arr[],int size,vector<int>ans){
    stack<int>st;
    st.push(-1);
for (int i=0; i<6; i++)

{
int curr=arr[i];
while(st.top()>=curr){
    st.pop();
}
ans[i]=st.top();
  st.push(curr); 
}
return ans;
}
int main(){
    int arr[6]={3,5,8,2,1,9};
    int size=6;
 vector<int>ans(size);
 ans =smaller(arr,size,ans);
     for (int i = 0; i < 6; i++)
     {cout<<ans[i]<<" ";
        /* code */
     }
     
    return 0;
}