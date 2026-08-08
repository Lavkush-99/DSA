#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
        else return true;
    }

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<endl;
    cout<<"Number are prime or not: "<<isPrime(n);
}