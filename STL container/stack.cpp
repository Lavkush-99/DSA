#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    cout<<"size: "<<s.size()<<endl;
    s.push(2);
    s.push(4);
    s.push(5);
    cout<<"size: "<<s.size()<<endl;

    cout<<"top: "<<s.top()<<endl;

    stack<int>s1;
    s1.swap(s);
    cout<<"size of stack s: "<<s.size()<<endl;
    cout<<"size of stack s1: "<<s1.size()<<endl;
   
    
    cout<<s.empty()<<endl;
    cout<<"Print stack element: ";

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;

    
    return 0;
    
}