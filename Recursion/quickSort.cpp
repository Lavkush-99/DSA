#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&vec,int st,int end){
    int idx=st-1,pivot=vec[end];
    for(int j=st;j<end;j++){
        if(vec[j]<=pivot){
            idx++;
            swap(vec[idx],vec[j]);
        }
    }
    idx++;
    swap(vec[idx],vec[end]);
    return idx;
}
void quickSort(vector<int>&vec,int st,int end){
    if(st<end){
        int pivIdx=partition(vec,st,end);
        quickSort(vec,st,pivIdx-1);
        quickSort(vec,pivIdx+1,end);    }
}
int main(){
    vector<int>vec={5,7,3,2,1,9,8};
    quickSort(vec,0,vec.size()-1);
    for(int val:vec){
        cout<<val<<" ";
    }
    return 0;
}