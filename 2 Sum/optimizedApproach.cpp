#include<iostream>
#include<vector>
#include<unordered_map>;
using namespace std;
vector<int>twoSum(vector<int>&arr,int tar){
    vector<int>ans;
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++){
        int first=arr[i];
        int second=tar-first;
        if(m.find(second)!=m.end()){
              ans.push_back(i);
              ans.push_back(m[second]);
              return ans;
              break;
        }
        m[first]=i;
    }
    return ans;

}
int main(){
    vector<int>vec={2,6,5,7,8,9,0};
    int target;
    cout<<"Enter target: ";
    cin>>target;
    vector<int>ans=twoSum(vec,target);
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}