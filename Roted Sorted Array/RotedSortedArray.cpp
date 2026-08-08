#include<iostream>
#include<vector>
using namespace std;
int rotatedArray(vector<int>num,int target){
    int st=0,n=num.size();
    int end=n-1;
    while(st<end){
        int mid=st+(end-st)/2;
        if(num[mid]==target){
            return mid;
        }
        if(num[st]<=num[mid]){
          if(num[st]<=target && target<num[mid]){
              end=mid-1;
            }
            else{
                 st=mid+1;
                }
        }

    
        else{
          if(num[mid]<=target && target<=num[end]){
              st=mid+1;
            }else{
                end=mid-1;
              }
        }
    }

}
int main(){
    vector<int>num={3,4,2,5,6,7,8};
    int tar;
    cout<<"Enter target: ";
    cin>>tar;
    
    cout<<"The index of the target is: "<<rotatedArray(num,tar);
}