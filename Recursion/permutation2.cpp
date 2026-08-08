#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int n;
vector<vector<int>>ans;
unordered_set<int>st;
void solve(vector<int>&temp,vector<int>&num){
    if(temp.size()==n){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<n;i++){
       if(st.find(num[i])==st.end()){
        temp.push_back(num[i]);
        st.insert(num[i]);
        solve(temp,num);
        temp.pop_back();
        st.erase(num[i]);

       }
    }
}
vector<vector<int>>permut(vector<int>&num){
    n=num.size();
    vector<int>temp;
    solve(temp,num);
    return ans;


}
int main(){
    vector<int>vec={2,4,5,6};
    vector<int>num;
    permut(vec);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}