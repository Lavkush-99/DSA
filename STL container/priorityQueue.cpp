#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>q;      // time complicity O(logn).Follows BST.
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.top()<<endl;
    cout<<"Queue are full(1) or void(0): "<< q.empty()<<endl;
    cout<<"top: "<<q.top()<<endl;


    cout<<"Decreasing order queue: ";
    while(!q.empty()){  // decreasing order number return.
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;

    priority_queue<int,vector<int>,greater<int>>q1;
    q1.push(7);
    q1.push(5);
    q1.push(9);
    q1.push(10);
    cout<<"Increasing order queue: ";

    while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
}