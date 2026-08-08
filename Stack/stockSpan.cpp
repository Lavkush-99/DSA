#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>price={4,5,6,9,7,8,2,3};
    stack<int>s;                        // stack store prev high price idx.
    vector<int>ans(price.size(),0);
    for(int i=0;i<price.size();i++){
        while(s.size()>0 && price[s.top()]<price[i] ){
            s.pop();
        }
        if(s.empty()){
            ans[i]=i+1;
        }
        else{
            ans[i]=i-s.top(); // number of step between prevHigh and curr.
        }
        s.push(i);
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
   
}