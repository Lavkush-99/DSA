#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={3,5,2,7};
    int n=v.size();

    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){

        for(int j=i+1;j<n;j++){
            if(i==n-1){
                ans[i]=-1;
                break;
            }
            if(v[j]>v[i]){
                ans[i]=v[j];
                break;
            }
            if(j==n-1){
                ans[i]=-1;
            }
        }
        if(i==n-1)
           ans[i]=-1;

        
    }
    for(int val:ans){
        cout<<val<<" ";
    }
}