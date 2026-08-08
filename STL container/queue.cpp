#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q; // create queue using STL container.
    q.push(4);
    q.push(2);
    q.push(5);
   cout<<q.front();
   q.pop();
   cout<<q.front();
    queue<int>q1;  
    q1.swap(q);
    cout<<"size q: "<<q.size()<<endl;
    cout<<"size q1: "<<q1.size()<<endl;
    cout<<"queue: ";
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }cout<<endl;
    
    cout<<"front: "<<q1.front()<<endl;
   
}