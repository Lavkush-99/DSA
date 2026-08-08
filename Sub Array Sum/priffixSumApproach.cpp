#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int priffixSum(vector<int>nums,int n,int tar){
    vector<int>preSum(n,0);
    preSum[0]=nums[0];
    int count=0;
    for(int i=1;i<n;i++){
        preSum[i]=preSum[i-1]+nums[i];
    }
    unordered_map<int,int>m;
    for(int j=0;j<n;j++){
        if(preSum[j]==tar) count++;
           int val=preSum[j]-tar;
           if(m.find(val)!=m.end()){
            count+=m[val];
           }
           m[preSum[j]]++;
    }
    return count;

}
int main(){
    vector<int>arr={9,4,20,3,10,6};
    int n=arr.size();
    int target;
    cout<<"Enter target: ";
    cin>>target;
    cout<<"Number of sub Array which sum is equal to target: \n"<<priffixSum(arr,n,target);
    return 0;
}