#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,3,4,1};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;

    int a=2;
    int *ptr=&a;
    cout<<ptr<<endl;
    ptr++;                 // byte of integer add on address of a.
    cout<<ptr<<endl;
    cout<<ptr+2<<endl;
}