#include<iostream>
using namespace std;
void sum(int arr[],int sz){
    int sum=0;
    for(int i=0;i<sz;i++){
        sum+=arr[i];
    }
    cout<<"Element sum: "<<sum<<endl;

}
void product(int arr[],int sz){
    int prod=1;
    for(int j=0;j<sz;j++){
        prod*=arr[j];
    }
    cout<<"Element Product: "<<prod;

}
int main(){
    int arr[]={3,5,2,6,8,9};
    int size=6;
    cout<<"Original Array: ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    sum(arr,size);
    product(arr,size);
    return 0;
}
