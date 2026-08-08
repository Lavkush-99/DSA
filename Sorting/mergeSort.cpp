#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int>arr1,vector<int>arr2,int m,int n){
    int i=m-1,j=n-1,idx=m+n-1;
    vector<int>arr(m+n,0);
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr[idx--]=arr1[i--];
            
        }
        else{
            arr[idx--]=arr2[j--];
            
        }
    }
    while(j>=0 && i<0){
        arr[idx--]=arr2[j--];
        
    }while(i>=0 && j<0){
        arr[idx--]=arr1[i--];
    }
    for(int val:arr){
        cout<<val<<" ";
    }
}
int main(){
    vector<int>vec1={1,3,6};
    vector<int>vec2={2,4,5,7};
    int m=vec1.size();
    int n=vec2.size();
    mergeSort(vec1,vec2,m,n);
    
}