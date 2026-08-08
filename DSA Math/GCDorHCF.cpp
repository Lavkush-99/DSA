#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(a!=0 || b!=0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
        
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }
    
}
int main(){
    int a,b;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter number b: ";
    cin>>b;
    cout<<endl;
    cout<<"greatest common factor is: "<<gcd(a,b);
}