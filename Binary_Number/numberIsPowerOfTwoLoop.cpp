#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number n:";
    cin>>n;
    for(int i=0;i<n;i++){                 // method 1.
        if(n==pow(2,i)){
            cout<<"The Number is power of 2.";
        }
       
    }           
    if(n>=0){                              // method 2.
        while(n%2==0){
            n/=2;
        }
        if(n==1){
            cout<<"powerof 2.";
        }
        else{
          cout<<"not a power of 2.";
       }
    }
}