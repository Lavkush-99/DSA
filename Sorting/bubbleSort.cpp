#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&arr,int n){
    bool isSwap=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }

        }
    }
    if(isSwap==false){
        return;
    }
    
}
void printArray(vector<int>array,int n){
    for(int val:array){
        cout<<val<<" ";
    }
}
int main(){
    vector<int>vec={3,5,1,8,2,6};
    cout<<"Array before sorting: ";
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    int n=vec.size();
    bubbleSort(vec,n);
    cout<<"Array after sorting: ";
    printArray(vec,n);
    return 0;
}