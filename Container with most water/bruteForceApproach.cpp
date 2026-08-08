#include<iostream>
#include<vector>
using namespace std;
int maximumWater(vector<int>container){
    int ht,wt;
    int n=container.size();
    int maxWater=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ht=min(container[i],container[j]);
            wt=j-i;
            maxWater=max(maxWater,ht*wt);
        }
    }
    return maxWater;

}
int main(){
    vector<int>container={2,4,3,5,6,7};
    cout<<"The maxWater is: "<<maximumWater(container);
    return 0;
}