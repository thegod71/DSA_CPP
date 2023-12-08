#include<iostream>
#include<stack>
using namespace std;
bool check(string &str){
    stack<char>st;
    for (int i = 0; i < str.length(); i++)
    {
       char ch=str[i];
       if(ch=='-'||ch=='+'||ch=='*'||ch=='/'||ch=='('){
        st.push(ch);
       }
       else if (ch==')')
       {int count=0;
       while(!st.empty()&&st.top() !='('){
        char c=st.top();
        if(c=='-'||c=='+'||c=='*'||c=='/'){
            count++;
        }
        st.pop();
       }
       st.pop();
    if(count==0){
            return true;
        }
       }  
    }
    return false;
    
}
int main(){
    string str="((a+b)*(c+d)+(c*d)))";
    bool ans=check(str);
    if(ans==true){
        cout<<"redundant present";
    }
    else{
        cout<<"redundant not present";
    }
    return 0;
}
