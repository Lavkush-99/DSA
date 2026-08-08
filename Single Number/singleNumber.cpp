#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>&nums){
    int ans=0;
    for(int val:nums){
        ans=ans^val;
    }
    return ans;

}
int main(){
    vector<int>nums={2,4,3,5,6,7,2,4,3,5,6};
    cout<<"The single element is: "<<singleNumber(nums);
    return 0;
}