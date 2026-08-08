#include<iostream>
#include<vector>
using namespace std;
vector<int>prodArray(vector<int>num){
    int n=num.size();
    vector<int>ans(n,1);

    for(int i=1;i<n;i++){
        ans[i]*=ans[i-1]*num[i-1];
    }
    int suffix=1;
    for(int j=n-2;j>=0;j--){
        suffix *=num[j+1];
        ans[j]*=suffix;
    }
    return ans;

}
int main(){
    vector<int>num={1,2,3,4};
    vector<int>ans=prodArray(num);
    for(int val:ans){
        cout<<val<<" ";
    }
}
