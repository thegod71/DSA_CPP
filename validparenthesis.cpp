class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       for(int i=0;i<s.size();i++){
           char ch =s[i];
        //    if(st.empty()!=NULL){
        //         st.push(ch);
        //    }
           if (ch=='{'||ch=='('||ch=='['){
               st.push(ch);
           }
           else{
               if(!st.empty()){
               if(ch==']'&&st.top()=='['){
                   st.pop();
               }
               else if(ch=='}'&&st.top()=='{'){
                   st.pop();
               }
               else if(ch==')' && st.top()=='('){
                   st.pop();
               }
               else{
                   st.push(ch);
               }
           }
               else{
                   return false ;
               }
               

           }
       } 
       if(st.size()==0){
           return true;
       }
       else{
           return false;
    }}
};