#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int>num,int target,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        if(num[mid]>target){
            return bs(num,target,st,mid-1);
        }
        if(num[mid]<target){
            return bs(num,target,mid+1,end);
        
        }
        if(num[mid]==target){
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>num={9,8,7,6,5,4,3};
    int n=num.size();
    int st=0,end=n-1;
    int tar;
    cout<<"Enter target: ";
    cin>>tar;
    cout<<"The index of the target: "<<bs(num,tar,st,end);
}