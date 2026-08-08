#include<iostream>
#include<vector>
using namespace std;          // two pointer approach.
vector<int>pairSum(vector<int>num,int target){
    vector<int>ans;
    int n=num.size();
    int i=0,j=n-1;
    
    while(i<j){
        int ps=num[i]+num[j];
        if(ps<target){
            i++;
        }
        else if(ps>target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int>num={2,4,5,7,8,9};
    int tar=6;
    vector<int>ans=pairSum(num,tar);
    cout<<"The index of the pair is: "<<ans[0]<<" "<<ans[1];
    return 0;
}
