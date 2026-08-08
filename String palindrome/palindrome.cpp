#include<iostream>
using namespace std;
bool isPalindrome(string s,int n){
 int st=0,end=n-1;

 while(st<end){
     if(s[st]==s[end]){
          st++,end--;
        
        }return false;
    }
    return true;

}
int main(){
 string s;

 cout<<"Enter string: ";
 cin>>s;
 int n=s.length();
 cout<<"string are palindrome: "<<isPalindrome(s,n);
 return 0;
}

