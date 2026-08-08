#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,0};
    int n=vec.size();
    int inversionCount=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vec[i]>vec[j]){
                inversionCount++;
            }
        }
    }
    cout<<"pair"<<inversionCount;
}