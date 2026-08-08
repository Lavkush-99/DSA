#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int>vec,int target){
    int idx=0;
    for(int val:vec){
        if(target==val){
            return idx;
        }else{
            idx++;
        }
    }

}
int main(){
    vector<int>vec={2,3,4,5,6,7,1,7,8};
    int tar=8;
    cout<<"The index of the target is: "<<linearSearch(vec,tar);
    return 0;
}