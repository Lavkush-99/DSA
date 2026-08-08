#include<iostream>
#include<vector>
using namespace std;
vector<int>Tosum(vector<int>&vec,int tar){
    vector<int>ans;
    for(int i=0;i<vec.size();i++){
        int sum=0;
        for(int j=0;j<vec.size();j++){
            sum=vec[i]+vec[j];
            if(sum==tar){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }else{
                sum=0;
            }
        }
    }
}
int main(){
    vector<int>vec={2,5,3,4,10,8,19};
    cout<<"Enter target: ";
    int target;
    cin>>target;
    vector<int>ans=Tosum(vec,target);
    for(int val:ans){
        cout<<val<<" ";
    }
}