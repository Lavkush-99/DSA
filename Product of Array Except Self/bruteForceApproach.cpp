#include<iostream>
#include<vector>
using namespace std;
vector<int>productOfArray(vector<int>num){
    vector<int>ans;
    int prod=1;
    for(int val:num){
        prod*=val;
    }
    for(int i=0;i<num.size();i++){
        ans.push_back(prod/num[i]);

    }
    return ans;

}
int main(){
    vector<int>num={2,4,1,3,5,6};
    vector<int>ans=productOfArray(num);
    for(int val:ans){
        cout<<val<<" ";
    }
}