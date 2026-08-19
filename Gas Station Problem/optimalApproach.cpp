#include<iostream>
#include<vector>
using namespace std;   // TC=O(n) SC=O(1)
int main(){
    vector<int>gas={1,2,3,4,5};
    vector<int>cost={3,4,5,1,2};

    int totalGas=0,totalCost=0;

    for(int i=0;i<gas.size();i++){ // can be remove both for loop to calculating totalGas and totalCost.
        totalGas+=gas[i];
    }
    for(int j=0;j<cost.size();j++){
        totalCost+=cost[j];
    }

    if(totalCost>totalGas) 
              cout<<"-1";

    else{
        int start=0,currGas=0;
        for(int i=0;i<gas.size();i++){
            currGas+=gas[i]-cost[i];
            if(currGas<0){
                start=i+1;
                currGas=0;
            }
        }
        cout<<"The starting value is : "<<gas[start]<<" at index : "<<start;
    }
    return 0;
}