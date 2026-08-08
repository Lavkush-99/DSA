#include<iostream>
#include<vector>
using namespace std;
class stack{
    vector<int>v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v[v.size()-1];
    }
    bool isEmpty(){
        return v.size()==0;
    }
    
};
int main(){
    stack s;
    s.push(12);
    s.push(34);
    s.push(89);
    s.push(98);
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
   
}