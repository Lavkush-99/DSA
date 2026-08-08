#include<iostream>
#include<unordered_map>    // time complicity is o(1).
using namespace std;
int main(){
    unordered_map<string,int>m;
    m["name"]=1;
    m["branch"]=2;
    m["year"]=3;

    for(auto p:m){
        cout<<p.first<<" , "<<p.second<<endl;
    }
    cout<<"branch key present: "<<m.count("branch");
    return 0;
}