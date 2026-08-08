#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int>num,int target){
    vector<int>ans;
    int n=num.size();
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(num[i]+num[j]==target){
              ans.push_back(i);     // if use index to store i and j at index 0 and 1 then length,value specified at creating time.
              ans.push_back(j);
            }
        }
    }
    return ans;

}
int main(){
    vector<int>num={3,4,5,1,2,10,8,9};
    int tar=8;
    cout<<"The index of the pair number: ";
    vector<int>ans=pairSum(num,tar);
    cout<<ans[0]<<" , "<<ans[1];
    return 0;

}