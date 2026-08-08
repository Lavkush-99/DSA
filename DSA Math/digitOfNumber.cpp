#include<iostream>
using namespace std;
void digitOfNumber(int n){           // total digit is = (log10 n + 1).
    cout<<"Digit of the number is: \n";
    while(n>0){
        int digit=n%10;
       cout<<digit<<endl;
       n/=10;
    }
    
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<endl;
    digitOfNumber(n);
    return 0;
}