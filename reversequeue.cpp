#include<iostream>
#include<queue>
using namespace std;
void revere(queue<int>&q){
if(q.empty()){
    return ;
}
int temp=q.front();
q.pop();
revere(q);
q.push(temp);
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    revere(q);
    while(!q.empty()){
int a=q.front();
q.pop();
cout<<a<<" "; 
 }

    return 0;
}