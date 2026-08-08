#include<iostream>
using namespace std;
int main(){
    int a=2;
    float b=3;
    int *ptr1=&a;
    float *ptr2=&b;
    cout<<"Address of a is: "<<ptr1<<endl;
    cout<<"Address of b is: "<<ptr2<<endl;
    int **ptr3=&ptr1;
    cout<<ptr3<<endl;
    cout<<*ptr1;         // dereference: value at address.
    cout<<*ptr3;

}