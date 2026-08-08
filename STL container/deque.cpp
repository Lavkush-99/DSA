#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(2);
    d.emplace_back(4);
    d.push_front(7);
    d.emplace_front(8);
    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    d.pop_front();
    d.pop_back();
    cout<<"deque ";
    for(int val:d){
        cout<<val<<" ";
    }
    d.clear();
    cout<<endl;
    cout<<"deque: ";
    for(int val:d){
        cout<<val;
    }
}