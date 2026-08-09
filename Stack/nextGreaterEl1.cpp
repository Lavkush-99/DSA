#include<iostream>
#include<stack>      // Brute Force Approach.
#include<vector>  // given two vector one is subset of other find next greater element of fisrt corresponding to second.
using namespace std;
int main(){
    vector<int>arr1={4,1,2};
    int n1=arr1.size();
    vector<int>arr2={1,3,4,2};
    int n2=arr2.size();
    vector<int>ans(n1);
    stack<int>s;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                if(j==n2-1){
                    ans[i]=-1;
                }
                for(int k=j+1;k<n2;k++){
                       
                       if(arr2[j]<arr2[k]){
                           ans[i]=arr2[k];
                           break;
                        }
                        if(k==n2-1)
                           ans[i]=-1;                 
                }
            }
        }
    }
    for(int val:ans){
        cout<<val<<" ";
    }
}