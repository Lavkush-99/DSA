#include<iostream>
using namespace std;
int reNum(int x){
    int rev=0;
    while(x>0){
        int ld=x%10;
        rev*=10;
        rev+=ld;
       
        x/=10;
    }
    return rev;
}

int main(){
    int n;
    cout<<"Enter number n:";
    cin>>n;
    cout<<"The reverse number is:"<<reNum(n);

}