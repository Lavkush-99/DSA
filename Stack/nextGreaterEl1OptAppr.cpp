#include<iostream>
#include<stack>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>m;
    stack<int>s;

    vector<int>num1={4,1,2};
    int n1=num1.size();
    vector<int>num2={1,3,4,2};
    int n2=num2.size();

    for(int i=n2-1;i>=0;i--){
        while(s.size()>0 && s.top()<num2[i])
           s.pop();
        if(s.size()==0)
             m[num2[i]]=-1;
        else
            m[num2[i]]=s.top();

        s.push(num2[i]);
    }
    vector<int>ans;
    for(int i=0;i<num1.size();i++){
        ans.push_back(m[num1[i]]);
        cout<<ans[i]<<" ";
    }
  return 0;
}