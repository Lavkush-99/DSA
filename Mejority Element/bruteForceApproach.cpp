#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>num){
    int n=num.size();
    for(int ans:num){
        int freq=0;
        for(int val:num){
            if(val==ans){
                freq++;
            }
        }
        if(freq>n/2){
            return ans;
        }
    }

}
int main(){
    vector<int>num={3,2,1,2,6,2,4,2,2,2};
    cout<<"The majority element is: "<<majorityElement(num);
}