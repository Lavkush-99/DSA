#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>fourSum(vector<int>arr,int n){
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<n;){
            int p=j+1,q=n-1;
            while(p<q){
                if(p<q && arr[p]==arr[p-1]){
                    p++;
                    continue;
                }
                int sum=arr[i]+arr[j]+arr[p]+arr[q];
                if(sum<0) p++;
                else if(sum>0) q--;
                else{
                    ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                    p++,q--;
                }

                
            }
            j++;
            if(j<n && arr[j]==arr[j-1]){
                j++;
                continue;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>vec={-2,-1,-1,1,1,2,2};
    int n=vec.size();
    vector<vector<int>>ans=fourSum(vec,n);
    cout<<"4 Element which sum is equal to zero: \n";
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}