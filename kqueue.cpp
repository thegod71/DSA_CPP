#include<iostream>
#include<queue>
using namespace std;
class kqueue{
    public:
    int n , k,freespace;
    int *arr ,*front,*rear,*next;
    kqueue(int _n,int _k):n(_n),k(_k),freespace(0){
        arr= new int[n];
        front= new int[k];
        rear= new int[k];
        next=new int[n];
        for (int i = 0; i < k; i++)
        {
            front[i]=rear[i]=-1;
        }
        for (int i = 0; i < n; i++)
        {
             next[i]=i+1;
             next[n-1]=-1;
        } 
    }
    bool push(int x,int q){
if(freespace==-1){
    return false;
}
int index=freespace;
freespace=next[index];
if(front[q]==-1){
    front[q]=index;
}
else{
    next[rear[q]]=index;
}
next[index]=-1;
rear[q]=index;
arr[index]=x;
return true;
    }
int pop(int q){
    if(front[q]==-1){
        return -1;
    }
    int index=front[q];
    front[q]=next[index];
    next[index]=freespace;
    freespace=index;
    return arr[index];
}
};
int main(){
    kqueue k(5,3);
    k.push(6,2);
    k.push(4,1);
    k.push(5,2);
    k.push(1,0);
    k.push(6,0);
    cout<<k.pop(0)<<endl;
    cout<<k.pop(0)<<endl;
    cout<<k.pop(0)<<endl;
    cout<<k.pop(0)<<endl;


    return 0;
}