#include<iostream>
#include<vector>
using namespace std;
void revNum(vector<int>&vec,int sz){            // Big game of pass by reference and pass by value.
    int st=0,end=sz-1;
    while(st<end){
        swap(vec[st],vec[end]);
        st++;
        end--;
    }

}
int main(){
    vector<int>vec={2,3,4,5};
    int siz=vec.size();
    cout<<"Before reversing vector: ";
    for(int val:vec){
        cout<<val<<" ";
    }cout<<endl;
    revNum(vec,siz);
    cout<<"After reversing vector: ";
    for(int val:vec){
        cout<<val<<" ";
    }
    return 0;
}