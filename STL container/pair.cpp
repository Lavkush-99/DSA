#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int,int>p={1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<char,pair<char,int>>p1={'a',{'b',3}};
    cout<<p1.first<<endl;
    cout<<p1.second.first<<endl;
    cout<<p1.second.second<<endl;


    vector<pair<int,int>>vec= {{3,4},{6,7}};
    
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    vec.push_back({1,2});               // pre made pair and direct put in vec.
    vec.emplace_back(4,5);               // no need to make pair before and no need to use curly bracket.

    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;


}