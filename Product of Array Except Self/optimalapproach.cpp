#include<iostream>
#include<vector>
using namespace std;
vector<int>prodOfArrayExceptSelf(vector<int>num){
    int n=num.size();
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);
    vector<int>ans(n,1);
    prefix[0]=1;
    suffix[n-1]=1;
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*num[i-1];
    }
    

    for(int j=n-2;j>=0;j--){
        suffix[j]=suffix[j+1]*num[j+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
    }
 return ans;

}
int main(){
    vector<int>num={2,5,8,9,7};
    vector<int>ans= prodOfArrayExceptSelf(num);
    for(int val:ans){
        cout<<val<<" ";
    }
}