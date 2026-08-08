#include<iostream>
using namespace std;
void reverseArray(int arr[],int sz){
    int st=0,end=sz-1;
    while(st<end){
        swap(arr[st],arr[end]);
        end--;
        st++;
    }

}
int main(){
    int arr[]={2,4,56,1,2};
    int size=5;
    cout<<"Original Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    reverseArray(arr,size);
    cout<<endl;
    cout<<"The reverse of Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}