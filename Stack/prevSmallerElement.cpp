#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={5,4,6,7,3};
    int n=arr.size();
    stack<int>s;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        while(s.size()>0 && arr[i]<=s.top())
             s.pop();
        if(s.empty())
              ans[i]=-1;
        else
          ans[i]=s.top();
        
        s.push(arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<ans[i]<<" ";
    }
}