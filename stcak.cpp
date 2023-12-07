#include<iostream> 
#include<stack>

using namespace std;
class stak{
    public:
    int *arr;
    int size;
    int top=-1;
    stak(int size){
        arr=new int[size];
        this->size=size;
        this->top=top;
    }
    int getlenth(){
        return  top+1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"stack is overflow";
        }
       else{
        top++;
     arr[top]=data; 
       } 
    }
    void pop(){
        if(top==-1){
            cout<<"stack is underflow";

        }
        else{
            top--;
        }
    }
    void print(){
        int l=getlenth();
        for (int i = 0; i < l; i++)
        {
            cout<<"["<<arr[i]<<"]"<<"next";
            
            /* code */
        }
        
    }
    bool isempty(){
        if(top==-1){
            cout<<"stack is empty ";
            return true;
        }
        else{
        }
    }
};
 
  
int main (){int a;
    stak st(8);
    st.push(8);
     st.print();
// Node *first=new Node(984);
// Node *second=new Node(93);
// Node *three=new Node(91);
// Node *four=new Node(9);
//  first->next=second;
//  second->next=three;
//  three->next=four;
// Node *head=first; 
// print(head);
// cout<<endl;
// //add(head);
// //print(head);
// fromno(head,2); 
 
return 0;}