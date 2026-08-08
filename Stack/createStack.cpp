#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(12);
    s.push(33);
    s.push(45);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}