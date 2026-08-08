#include<iostream>
using namespace std;
int linearSearch(int arr[5],int target){
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            
            return i;
        }
    }return -1;
}

int main(){
    int arr[5];
    cout<<"Enter array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int tar;
    cout<<"Enter target: ";
    cin>>tar;
    cout<<"The index of target is:"<<linearSearch(arr,tar);
    return 0;
}