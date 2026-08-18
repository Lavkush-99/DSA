#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void singleUniqueElement(vector<int>v,int n,int k,vector<int>&ans){
   
   int maxEl=INT_MIN;
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            maxEl=max(maxEl,v[j]);
        }
        ans.push_back(maxEl);
    }
}
void print(vector<int>ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v={3,-1,6,4,-3,9,7,8};
    vector<int>ans;
    int k=3;
    int n=v.size();
    singleUniqueElement(v,n,k,ans);
    print(ans);
}