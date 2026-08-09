#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>nextGreater(vector<int>arr,vector<int>&ans,int n){
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(s.size()>0 && s.top()<=arr[i])
              s.pop();
        if(s.size()==0)
             ans[i]=-1;
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}

int main(){
    vector<int>arr={2,4,3,5};
    int n=arr.size();
    vector<int>ans(n);

    nextGreater(arr,ans,n);

   for(int val:ans){
    cout<<val<<" ";
   }
   return 0;
}