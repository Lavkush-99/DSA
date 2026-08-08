#include<iostream>
using namespace std;
void uniqueNum(int arr[],int sz){
    
      for(int i=0;i<sz;i++){
         int count=0;
         for(int j=0;j<sz;j++){
                if(arr[i]==arr[j]){
                    count++;

                }
            }
            if(count==1){
              cout<<arr[i]<<" ";
            }
        }
    cout<<endl;
}

/* method 2 use XOR when onlyone unique value present.
int uniqueNum(int arr[10]){
    int ans=0;
    for(int i=0;i<10;i++){
        ans=ans^arr[i];
    }
    return ans;
}               */

    

int main(){
    int arr[]={2,3,4,5,2,6,7,8,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    uniqueNum(arr,size);
    return 0;

}