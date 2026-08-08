#include<iostream>
using namespace std;
double solve(double x,long n){
    if(n==0) return 1;
    if(n==1) return x;
    if(n<0) return solve(1/x,-n);
    if(n%2==0) return solve(x*x,n/2);
    else return x*solve(x*x,(n-1)/2);
    }

int main(){
    double X;
    long N;
    cout<<"Enter number: ";
    cin>>X;
    cout<<"Enter power: ";
    cin>>N;
    cout<<"The power(X,N) is: "<<solve(X,N);
    return 0;
}
