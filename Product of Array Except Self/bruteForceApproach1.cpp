#include<iostream>
#include<vector>
using namespace std;
vector<int>productOfArray(vector<int>num){
    vector<int>ans;
    int n=num.size();
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                prod*=num[j];
            }
        }
        ans.push_back(prod);

    }
    return ans;

}
int main(){
    vector<int>num={2,4,3,5,1};
    vector<int>ans=productOfArray(num);
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}