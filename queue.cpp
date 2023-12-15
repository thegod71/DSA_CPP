#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int rear;
    int front;
    Queue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
        }
     void push(int data ){
        if(rear==-1&&front==-1){
            rear++;
            front++;
            arr[rear]=data;
            
        }
        else if(rear==size-1){
            cout<<"Overflow ";
            return ;
        }
        else{
            rear++;
            arr[rear]=data;

        }
       
     }  
    void pop(){
        if(rear==-1 && front==-1){
            cout<<"underflow";
        }
        else if(rear==front){
         arr[front]=-1;
         front=-1;
         rear =-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }  
    int len(){
        if(rear==-1&&front==-1){
            return 0;
        }
        else{
            return rear-front+1;
        }
    }
    void print(){
        for (int i = 0; i < size; i++)
        {
             cout<<arr[i]<<"  ";
        }
        
    }   
int getrear(){
        if(rear==-1){
            cout<<"no element";
            return 0;
        }
        else{
            return arr[rear];
        }
    }
};
int main(){
    Queue r(8);
    r.push(8);
  r.print();
  r.push(6);
  r.push(2);
  r.push(9);
  r.push(1);
  r.push(0);
  r.print();


     return 0;
}