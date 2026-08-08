#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int sumOfDigit=0,temp=n;
    while(n>0){
        int digit=n%10;
        sumOfDigit+=digit*digit*digit;
        n= n/10;
    }
    if(sumOfDigit==temp){
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<isArmstrong(n);
    
    return 0;
}