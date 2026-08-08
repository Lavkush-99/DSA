#include<iostream>
#include<vector>
#include<algorithm>     // TC= O(nlogn + n2) . SC = O(1).
using namespace std;
vector<vector<int>>threeSum(vector<int>arr,int n){
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1,k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                ans.push_back({arr[i],arr[j],arr[k]});
                j++; k--;
            }
            if(j<k && arr[j]==arr[j-1]) j++;
        }
    }
    return ans;
}
int main(){
    vector<int>vec={-1,0,1,2,-1,-4};
    int n=vec.size();
    vector<vector<int>>ans=threeSum(vec,n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}