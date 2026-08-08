#include<iostream>
using namespace std;
int gcd(int a1,int b1){
    if(a1==b1) return a1;
    while(a1!=0 || b1!=0){
        if(a1>b1){
           a1=a1%b1;
        }else{
            b1=b1%a1;
        }
    }
    if(a1==0) return b1;
    return a1;
}
int LCM(int a,int b){
    int lcm=(a*b)/gcd(a,b);
    return lcm;


}
int main(){
    int a,b;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Enter number: ";
    cin>>b;
    cout<<"LCM of the a,b is: "<<LCM(a,b);
    return 0;
}