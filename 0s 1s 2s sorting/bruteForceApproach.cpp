#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={2,1,0,2,1,0};
    sort(vec.begin(),vec.end());
    for(int val:vec){
        cout<<val<<" ";
    }
}