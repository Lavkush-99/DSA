#include<iostream>
#include<vector>
using namespace std;


int totalPrime(int n){
     vector<bool>Prime(n,true);
     int ans=0;
     for(int i=2;i<n;i++){
          if(Prime[i]){
              ans++;
            }
         for(int j=i*2;j<n;j+=i){
             Prime[j]=false;
            }

        }
     cout<<"The number of prime number till "<<n<<" is: "<<ans<<endl;

    }
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool prime=true;
    cout<<endl;
   
    totalPrime(n);
    return 0;
}