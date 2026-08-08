#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>num){
    int n=num.size();
    
    sort(num.begin(),num.end());

    int ans=num[0];
    int freq=1;
    for(int i=0;i<n;i++){
        if(num[i]==num[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=num[i];
        }
        if(freq>n/2){
            return ans;
        }

    }
    

}
int main(){
    vector<int>num={2,4,3,2,5,2,6,2,2 };
    cout<<"The mejority element is: "<<majorityElement(num);
}