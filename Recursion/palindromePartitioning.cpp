#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPalin(string s){
    string s2=s;
    reverse(s2.begin(),s2.end());
    return s==s2;
}
void getAllPartitioning(string s,vector<vector<string>>&ans,vector<string>&partition){
    if(s.size()==0){
        ans.push_back(partition);
        return;
    }
    for(int i=0;i<s.size();i++){
        string part=s.substr(0,i+1);
        if(isPalin(part)){
            partition.push_back(part);
            getAllPartitioning(s.substr(i+1),ans,partition);
            partition.pop_back();
        }

    }
}
vector<vector<string>>partitions(string s){
    vector<vector<string>>ans;
    vector<string>partition;
    getAllPartitioning(s,ans,partition);
    return ans;
}
int main(){
    string s="aabbc";
    vector<vector<string>>ans=partitions(s);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<"";
        }
        cout<<endl;
    }

}