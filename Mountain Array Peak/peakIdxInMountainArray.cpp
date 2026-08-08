#include<iostream>
#include<vector>
using namespace std;
int peakArray(vector<int>num){
    int st=1,end=num.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(num[mid-1]<num[mid] && num[mid]>num[mid+1]){
            return mid;
        }
        else if(num[mid-1]<num[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}
int main(){
    vector<int>num={2,3,4,5,9,8,7,1};
    cout<<"the index of the peak element is: "<<peakArray(num);
}