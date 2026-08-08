#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>>threeSum(vector<int>vec,int n){
   
    set<vector<int>>uniqueTriplet;
    for(int i=0;i<n;i++){
        int tar= -vec[i];
         set<int>s;
        for(int j=i+1;j<n;j++){
            int third=tar-vec[j];
           
            if(s.find(third) !=s.end()){            
               vector<int>ans={vec[i],vec[j],third};
               sort(ans.begin(),ans.end());                  
              uniqueTriplet.insert(ans);
              
            }
            s.insert(vec[j]);
        }

    }
    vector<vector<int>>finalAns(uniqueTriplet.begin(),uniqueTriplet.end());
    return finalAns;

}
int main(){
    vector<int>vec={-1,0,1,2,-1,-4};
    int n=vec.size();
    vector<vector<int>>finalAns=threeSum(vec,n);
    int n1=finalAns.size();
    cout<<"Triplet which sum is equal to zero: \n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<finalAns[i].size();j++){
            cout<<finalAns[i][j]<<" ";
        }
        cout<<endl;

    }
}