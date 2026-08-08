#include<iostream>
using namespace std;
double xPower(int n,double x){
    if(n==0) return 1;
    if(x==0) return 0;
    if(x==-1&& n%2==0) return 1;
    if(x==-1&& n%2!=0) return -1;
    if(x==1) return 1;
    
    long long n;
    if(n<0)
    {
      x=1/x;
      n=-n;
    }
    double ans=1;
    while(n>0)
    {
      if(n%2==1)
      {
          ans=ans*x;
      }
         x=x*x;
         n=n/2;
    }
     return ans;
}

int main(){
    int N,X;
    cout<<"Enter X: ";
    cin>>X;
    cout<<"Enter N: ";
    cin>>N;
    cout<<"The value of the x^n: "<<xPower(N,X);

}