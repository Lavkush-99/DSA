#include<iostream>
#include<vector>
using namespace std;
void ditchAlgorithm(vector<int>&arr,int n){
    int mid=0,low=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++,mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
                high--;
            
        }
    }
}
void printSorted(vector<int>&arr,int n){
    for(int val:arr){
        cout<<val<<" ";
    }
}



int main(){
    vector<int>vec={2,1,0,2,1,0};
    int n=vec.size();
    ditchAlgorithm(vec,n);
    printSorted(vec,n);
    return 0;
}