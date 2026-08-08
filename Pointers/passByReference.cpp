
// pass by reference using pointer.

#include<iostream>
using namespace std;
void change(int *ptr){
    *ptr=3;
}
   // pass by reference using refereces.

void change1(int &b){
    b=40;
}

int main(){
    int a=20;
    cout<<a<<endl;
    change(&a);
    cout<<a<<endl;
    change1(a);
    cout<<a;
    return 0;
}