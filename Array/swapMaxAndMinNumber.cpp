#include<iostream>
using namespace std ;
void swapMaxMinNumber(int arr[],int sz){
    int maxIdx=0;
    int minIdx=0;
    for(int i=0;i<sz;i++){
        if(arr[i]<arr[minIdx]){
            minIdx=i;
        }
        
    }
    for(int j=0;j<sz;j++){
        if(arr[j]>arr[maxIdx]){
            maxIdx=j;
        }
    }
    swap(arr[maxIdx],arr[minIdx]);

}
int main(){
    int arr[]={2,5,4,7,8,9};
    int size=6;
    cout<<"Before swapping Array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swapMaxMinNumber(arr,size);
    cout<<"After swapping array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}