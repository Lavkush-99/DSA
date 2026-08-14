#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int>&stalls,int n,int c,int minAllowedDis){
    int cow=stalls[0], lastStallPos=stalls[0];
    for(int i=1;i<n;i++){
        if((stalls[i]-lastStallPos)>minAllowedDis){
            cow++;
            lastStallPos=stalls[i];
        }
        if(cow==c){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int>&arr,int n,int c){
    sort(arr.begin(),arr.end());
    int st=1,end=arr[n-1]-arr[0],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,c,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}
int main(){
    vector<int>vec={1,2,8,9,4};
    int N=vec.size(), C=3;
    cout<<"The maximum of the minimum distance betwin cows: "<<getDistance(vec,N,C);
    return 0;
}