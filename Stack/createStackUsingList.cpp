#include<iostream>
#include<list>
using namespace std;
class stack{
    public:
    list<int>l1;
    void push(int val){
        l1.push_front(val);
    }
    void pop(){
        l1.pop_front();
    }
    int top(){
       return l1.front();
    }
    bool isEmpty(){
        return l1.size()==0;
    }
};
int main(){
    stack s;
    s.push(35);
    s.push(28);
    s.push(48);
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}