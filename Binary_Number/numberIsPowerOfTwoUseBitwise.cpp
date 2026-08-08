#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number n:";
    cin>>n;
    for(int i=0;i<n;i++){
        if(n==(1<<i)){
            cout<<"Number is power of 2.";
        }
    }
    return 0;
}