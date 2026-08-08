#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,7,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    cout<<"Sorted increasing order Array: ";

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;

    sort(arr,arr+n,greater<int>());

    cout<<"Sorted decreasing order Array: ";

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<pair<int,int>>vec={{2,3},{4,5},{6,7}};
    sort(vec.begin(),vec.end());
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;         // on basis of first value sorted.

    }
    return 0;
}