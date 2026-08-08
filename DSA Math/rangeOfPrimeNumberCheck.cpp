#include<iostream>
using namespace std;
void isPrime(int N){
    bool prime=true;
    int count=0;
    cout<<"upto "<< N <<" all prime numbers.";
    for(int n=2;n<=N;n++){
       for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
        prime=true;
        count++;
       }
       if(prime==true){
        cout<<n<<" prime number.\n";
       }
    }
    cout<<"total prime number upto "<<N<<" is: " <<count<<endl;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    isPrime(n);
}