#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["name"]=1;
    m["branch"]=2;
    cout<<m["name"]<<endl;
    m.emplace("year",3);

    cout<<m.empty()<<endl;

 if(m.find("branch")!=m.end()){
    cout<<"found\n";
 }
 else{
    cout<<"not found\n";
 }
 return 0;
}