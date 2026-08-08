#include<iostream>
#include<vector>
using namespace std;
int subArraySum(vector<int>vec,int n,int tar){
    int count=0,sum=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=vec[j];
            if(sum==tar) count++;
        }
    }
    return count;
}
int main(){
    vector<int>arr={9,4,20,3,10,5};
    int n=arr.size();
    int target;
    cout<<"Enter target: ";
    cin>>target;
    cout<<"Number of the subArray which Sum is equal to target: "<<subArraySum(arr,n,target);
    return 0;
}