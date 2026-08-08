#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>vec){
    int st=0,n=vec.size(),end=n-1;
    if(n==1){
        return vec[0];
    }
    while(st<=end){
        int mid=st+(end-st)/2;
        if(vec[mid]==vec[0] && vec[0]!=vec[1]){
            return mid;
        }
        if(vec[mid]==vec[end] && vec[end]!=vec[end-1]){
            return mid;
        }
        
        if(vec[mid]!=vec[mid-1] && vec[mid] !=vec[mid+1]){
            return mid;
        }
        if(mid % 2==0){
           if(vec[mid]==vec[mid-1]){   // Left side.
              end=mid-1;
           }
           else{
              st=mid+1;
           }
        }
        else{                               // right side.
            if(vec[mid]==vec[mid+1]){     // move toward left side.
                end=mid-1;
            }
            else{
                st=mid+1;
            }

        }
    }
}


int main(){
    vector<int>nums={1,1,5,5,6,6,7,8,8,9,9};
    cout<<"The single number index is: "<<singleNumber(nums);
}