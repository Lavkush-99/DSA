#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
    list<int>l;
    l.push_back(3);
    l.emplace_back(1);
    l.push_front(5);
    l.emplace_front(9);
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;

    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout<<val<<" ";
    }
    return 0;

}