#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int>num,int target){
    int n=num.size();
    int st=0,end=n-1;
    while(st<=end){
      int mid=st+(end-st)/2;
      if(num[mid]<target){
          st=mid+1;
        }
      if(num[mid]>target){
         end=mid-1;
        }
       if(num[mid]==target){
          return mid;
        }
    }
    return -1;


}
int main(){
    vector<int>num={2,3,5,6,7,8,9};
    cout<<"Enter target: ";
    int x;
    cin>>x;
    cout<<"The index of the target is: "<<bs(num,x);
}