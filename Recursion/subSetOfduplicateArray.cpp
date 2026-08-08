#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getAllSubSet(vector<int>&nums,vector<int>&ans,vector<vector<int>>allSubSet,int i){
    if(i==nums.size()){
        allSubSet.push_back(ans);
        return ;
    }
    ans.push_back(nums[i]);
    getAllSubSet(nums,ans,allSubSet,i+1);
    ans.pop_back();
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;}
    getAllSubSet(nums,ans,allSubSet,idx);
    
}
vector<vector<int>>subSetWithDub(vector<int>&nums){
    vector<int>ans;
    vector<vector<int>>allSubSet;
    getAllSubSet(nums,ans,allSubSet,0);
    return allSubSet;
}
int main(){
    vector<int>nums={1,2,2};
    sort(nums.begin(),nums.end());
    vector<vector<int>>allSubSet=subSetWithDub(nums);
    for(int i=0;i<allSubSet.size();i++){
        for(int j=0;j<allSubSet[i].size();j++){
            cout<<allSubSet[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}