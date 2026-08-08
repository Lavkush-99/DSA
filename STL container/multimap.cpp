#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string,int>m;
    m.emplace("name",1);
    m.emplace("branch",2);
    m.emplace("branch",3);

    for(auto p:m){
        cout<<p.first<<" , "<<p.second<<endl;
    }

    m.erase("branch");        // all branch keys are deleted.For delete single key use m.erase(m.find("name")).
 return 0;
}