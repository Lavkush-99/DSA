#include<iostream>
#include<vector>
#include<unordered_set>            TC=O(n2)
using namespace std;
vector<int>missingAndRepeating(vector<vector<int>>&arr){
    unordered_set<int>s;
    vector<int>ans;
    int a;                          // repeating value.
    int b;                          // missing value.
    int n=arr.size();
    
    int actualSum=0,expectedSum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actualSum+=arr[i][j];
            if(s.find(arr[i][j])!=s.end()){
                  a=arr[i][j];
                  ans.push_back(a);
                
                }
                s.insert(arr[i][j]);
        }
    }
    expectedSum+=(n*n) * ((n*n)+1)/2;
    b=expectedSum+a-actualSum;
    ans.push_back(b);
    return ans;

}
int main(){
    vector<vector<int>>vec={{1,2,3},{3,5,6},{7,8,9}};
    vector<int>ans=missingAndRepeating(vec);
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}