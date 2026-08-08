#include<iostream>
using namespace std;
void intersectionArray(int arr1[],int sz1,int arr2[],int sz2){
    for(int i=0;i<sz1;i++){
        for(int j=0;j<sz2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arr1[]={2,4,5,6,1};
    int arr2[]={2,4,5,8,9};
    int size1=5;
    int size2=5;
    intersectionArray(arr1,size1,arr2,size2);
}