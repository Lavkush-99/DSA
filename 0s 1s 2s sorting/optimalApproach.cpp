#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count0=0,count1=0,count2=0;
    vector<int>vec={2,1,0,2,1,0};
    int n=vec.size();
    for(int i=0;i<n;i++){
        if(vec[i]==0){
            count0++;
        }else if(vec[i]==1){
            count1++;
        }else{
            count2++;
        }
    }
    int idx=0;
    for(int j=0;j<count0;j++){
        vec[idx++]=0;
    }
    for(int k=0;k<count1;k++){
        vec[idx++]=1;
    }
    for(int i=0;i<count2;i++){
        vec[idx++]=2;
    }
    for(int val:vec){
        cout<<val<<" ";
    }
    return 0;
}