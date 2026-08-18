#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>t={40,30,10,20};
    int st=INT_MIN,end=0,n=t.size();
    for(int i=0;i<n;i++){
        st=max(st,t[i]);
        end+=t[i];
    }
    int ans=0,k=2;
    while(st<=end){
        int mid=st+(end-st)/2;

        int p=1,time=0;
        for(int i=0;i<n;i++){
            if(time + t[i]<=mid){
                time+=t[i];
            }
            else{
                p++;
                time=t[i];
            }
        }
        if(p<=k){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    cout<<ans;
}