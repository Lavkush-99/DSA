#include<iostream>
using namespace std;
int binaryToDecimal(int x){
    int pow=1,ans=0;
    while(x>0){
        int ld=x%10;
        x/=10;
        ans+=pow*ld;
        pow*=2;
    }
    return ans;

}
int main(){
    cout<<"Enter Binary number:";
    int n;
    cin>>n;
    cout<<"The Decimal number is:"<<binaryToDecimal(n);
}