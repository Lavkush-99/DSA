#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={2,4,5,7,8};
    vector<int>:: iterator it;
    for(it= vec.begin(); it !=vec.end();it++){
        cout<<*(it)<<" ";

    }
    cout<<endl;
    
    
   
    for( auto it=vec.rbegin(); it != vec.rend();it++){   // reverse vetor printed.
        cout<<*(it)<<" ";

    }
}