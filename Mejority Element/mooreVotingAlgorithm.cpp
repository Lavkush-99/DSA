#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>num){
    int n=num.size();
    int ans=0,freq=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=num[i];
        }
        if(ans==num[i]){
            freq++;
        }else{
            freq--;
        }

    }
    return ans;
    

}
int main(){
    vector<int>num={2,4,3,4,5,4,6,4,4,6,4};
    cout<<"The majority element is: "<<majorityElement(num);
}