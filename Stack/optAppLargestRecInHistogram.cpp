#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>height={4,3};
    int n=height.size();
    stack<int>s;
    vector<int>right(n);
    vector<int>left(n);

    // right smaller value.

    for(int i=n-1;i>=0;i--){
        while(s.size()>0 && height[s.top()]>height[i])
               s.pop();
        right[i]=s.empty() ? n: s.top();

        s.push(i);
    }
 // do empty stack for reuse.

 while(!s.empty()){
    s.pop();
 }
    // left smaller value.

    for(int i=0;i<n;i++){
        while(s.size()>0 && height[s.top()]>height[i])
                s.pop();
        left[i]=s.empty() ?-1:s.top();

        s.push(i);
    }

    int ans=0;
    
    for(int i=0;i<n;i++){
        int wt=right[i]-left[i]-1;
        int currArea=height[i]*wt;
        ans=max(ans,currArea);
    }
    cout<<"The maximum Area of the Histogram :"<<ans;
}