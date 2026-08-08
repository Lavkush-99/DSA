#include<iostream>
#include<vector>
using namespace std;
void getPerm(vector<int>&num,int idx,vector<vector<int>>&ans){
    if(idx==num.size()){
        ans.push_back({num});
        return;
    }
    for(int i=0;i<num.size();i++){
        swap(num[idx],num[i]);
        getPerm(num,idx+1,ans);
        swap(num[idx],num[i]);
    }
}
vector<vector<int>>perm(vector<int>&num){
    vector<vector<int>>ans;
    getPerm(num,0,ans);
    return ans;
}
int main(){
    vector<int>num={2,4,5};
   vector<vector<int>>finalAns= perm(num);
   for(int i=0;i<finalAns.size();i++){
    for(int j=0;j<finalAns[i].size();j++){
        cout<<finalAns[i][j]<<" ";
    }
    cout<<endl;
   }
}