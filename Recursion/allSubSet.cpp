#include<iostream>
#include<vector> 
using namespace std;
void printSubSet(vector<int>&arr,vector<int>&temp,int i){
    if(i>=arr.size()){
        for(int val:temp){
            cout<<val<<" ";
        }
        cout<<endl;
        return ;
    }
    temp.push_back(arr[i]);  // take ith element.
    printSubSet(arr,temp,i+1);
    temp.pop_back();                 // not take ith element.
    printSubSet(arr,temp,i+1);
}
int main(){
    vector<int>solve={1,2,3};
    vector<int>temp;
    printSubSet(solve,temp,0);
    return 0;
}