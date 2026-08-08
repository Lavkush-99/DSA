#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        int curr=arr[i],prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
void printArray(vector<int>&arr,int n){
    for(int val:arr){
        cout<<val<<" ";
    }
}
int main(){
    vector<int>vec={5,3,2,8,7,9};
    int n=vec.size();
    selectionSort(vec,n);
    printArray(vec,n);
    return 0;
}