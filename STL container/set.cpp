#include<iostream>
#include<set>          //print in sorted manner because follow BST. TC=O(logn).
using namespace std;
int main(){
    set<int>s;
    s.insert(2);
    s.insert(4);
    s.insert(1);
    s.insert(6);
    cout<<"Set: ";
    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"lower bound: "<<*(s.lower_bound(4))<<endl;  //equal or greater then 4 value give.
    cout<<"upper bound: "<<*(s.upper_bound(4))<<endl;  // must be return greater then 4 value.
}