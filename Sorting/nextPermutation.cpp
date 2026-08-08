#include<iostream>
#include<vector>
using namespace std;
void nextPermutation(vector<int>&arr,int n){
    int pivot =-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[i-1]){
            pivot=i-1;
            break;
        }
    }
    
    for(int i=n-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[pivot],arr[i]);
            break;
        }
    }
    int i=pivot+1,j=n-1;
    while(i<=j){
        swap(arr[i++],arr[j--]);
    }
}
void printNextArray(vector<int>&arr,int n){
    for(int val:arr){
        cout<<val<<" ";
    }
}
int main(){
    vector<int>vec={2,4,3,5,6};
    int n=vec.size();
    nextPermutation(vec,n);
    printNextArray(vec,n);
}