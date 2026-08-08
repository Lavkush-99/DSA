#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
vector<vector<int>>threeSum(vector<int>vec){
    set<vector<int>>s;
    vector<int>ans;
    vector<vector<int>>finalAns;
    int n=vec.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(vec[i]+vec[j]+vec[k]==0){
                    vector<int>ans={vec[i],vec[j],vec[k]};
                
                   sort(ans.begin(),ans.end());
                   if(s.find(ans)==s.end()){
                          s.insert(ans);
                    }
                   finalAns.push_back(ans);

                }
            }
        }
    }
    return finalAns;
}
int main(){
    vector<int>vec={-1,2,3,0,1,4,-5};
    vector<vector<int>>finalAns=threeSum(vec);
    int n=finalAns.size();
    cout<<"Element which sum is equal to sero: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<finalAns[0].size();j++){
            cout<<finalAns[i][j]<<" ";

        }
        cout<<endl;
    }
    
        
    
    return 0;
}