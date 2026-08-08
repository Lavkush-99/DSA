#include<iostream>
#include<vector>
using namespace std;
 bool isSorted(vector<int>arr,int n){
    if(n==0 || n==1){
        return true;
    }
    return (arr[n-1]>=arr[n-2] && isSorted(arr,n-1));

}
int main(){
    vector<int>ans={2,9,6};

    cout<<"Array are sorted or not: "<<isSorted(ans,ans.size());
    return 0;
}