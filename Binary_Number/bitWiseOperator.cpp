#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number a: ";
    int a;
    cin>>a;
    cout<<endl;
    cout<<"Enter number b: ";

    int b;
    cin>>b;
    cout<<endl;
    cout<<(a & b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a<<1)<<endl;
    cout<<(a>>1);

}