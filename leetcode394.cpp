class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        for(auto ch:s){
        if(ch==']'){
      string stringtorepeat="";
      while(!st.empty()&&st.top()!="["){
          string top=st.top();
          stringtorepeat +=top;
               st.pop();
         }
      st.pop(); 
      string numericstring="";
       while(!st.empty() && isdigit(st.top()[0])){
          
           numericstring+=st.top();
           st.pop();
       }
       reverse(numericstring.begin(),numericstring.end());
       int n=stoi(numericstring);
         string current="";
       while(n--){
         
           current+=stringtorepeat;
          
       }
       st.push(current);
        }
      else{
          string temp(1,ch);
          st.push(temp);

      }  
      } 
      string ans="";
        while (!st.empty()) {
        ans+=st.top();
        st.pop();
    }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};