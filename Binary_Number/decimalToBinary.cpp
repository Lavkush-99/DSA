#include<iostream>
using namespace std;
int decimalToBinary(int x)
{ int pow=1;
    int ans=0;
     while(x>0){
      int rem=x%2;
      x/=2;
      ans+=rem*pow;
      pow*=10;

    }
   return ans; 
}
int main(){
    cout<<"Enter Decimal Number:";
    int n;
    cin>>n;
    cout<<"DecimalToBinaryNumber is"<<endl;
   for(int i=1;i<=n;i++){
    cout<<decimalToBinary(i)<<endl;
   }
}
