#include<iostream>
#include<vector>    // TC=O(log(n)).     Array are sorted.
using namespace std;
int bs(vector<int>arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar) return mid;
        else if(arr[mid]<tar)  return bs(arr,tar,mid+1,end);
        else return bs(arr,tar,st,mid-1);
    }
    return -1;
}
   
int main(){
    vector<int>ans={2,4,5,6,7};
    int n=ans.size();
    int tar;
    cout<<"Enter target: ";
    cin>>tar;
    int st=0,end=n-1;
    cout<<"The index at which target are lie: "<<bs(ans,tar,st,end);
    return 0;
}
