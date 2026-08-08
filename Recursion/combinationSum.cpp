#include<iostream>
#include<vector>
#include<set>
using namespace std;
set<vector<int>>s;
void helper(vector<int>&vec,int i,int n,int target,vector<vector<int>>&ans,vector<int>&combin){ 
    if(i==n || target<0)  return ;
    if(target==0){
        if(s.find(combin)==s.end()){
            ans.push_back(combin);
            s.insert(combin);
            return;
        }
    }
    combin.push_back(vec[i]);
    helper(vec,i+1,n,target-vec[i],ans,combin);  // single include.
    helper(vec,i,n,target-vec[i],ans,combin);    // multiple include.

    combin.pop_back();
    helper(vec,i+1,n,target,ans,combin);  // exclude.
}
vector<vector<int>>combinSum(vector<int>&vec,int target,int n){
    vector<vector<int>>ans;
    vector<int>combin;
    helper(vec,0,n,target,ans,combin);
    return ans;
}
int main(){
    vector<int>vec={2,3,5,6,4,7};
    int n=vec.size();
    int target;
    cout<<"Enter target: ";
    cin>>target;
    vector<vector<int>>ans=combinSum(vec,target,n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<"";
        }
        cout<<endl;
    }
    return 0;
}