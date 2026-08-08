#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr,int n){

    bool isSwap=false;
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
            swap(arr[i],arr[smallestIdx]);
            isSwap=true;

        
    }
    return ;

}
void printArray(vector<int>&arr,int n){
    for(int val:arr){
        cout<<val<<" ";
    }

}
int main(){
    vector<int>vec={5,4,7,2,9};
    int n=vec.size();
    selectionSort(vec,n);
    printArray(vec,n);
    return 0;
}