#include<iostream>
#include<climits>
using namespace std;
int main(){
   int largest= INT_MIN;
    int arr[5];
    cout<<"Write array element: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int idx=-1;
    for(int j=0;j<5;j++){
       if(arr[j]>largest){
          largest=arr[j];
          idx=j;
        }
    }
    cout<<"The largest value is:"<<largest<<" At index: "<<idx;
    return 0;

}