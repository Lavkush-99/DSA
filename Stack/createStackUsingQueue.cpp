#include<iostream>
#include<queue>
using namespace std;
class stack{
    public:
    queue<int>q;
    void push(int val){
        q.push(val);
        int n=q.size();
        for(int i=0;i<n-1;i++){
           q.push(q.front());
           q.pop();
        }
    }
    void pop(){
        if(!q.empty()){
            q.pop();
        }
    }
    int top(){
        return q.front();
    }
    bool Empty(){
        return q.empty();
    }
};
int main(){
    stack s;
    s.push(4);
    s.push(9);
    s.push(5);
    while(!s.Empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}