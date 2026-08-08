#include<iostream>
#include<algorithm>
using namespace std;
string addBinary(string a,string b){
    string ans="";
    int i=a.size()-1,j=b.size()-1,carry=0;
    while(i>=0 || j>=0 || carry){
        int sum=carry;
        if(i>=0) sum+=a[i]-'0';      // convert string into integer.
        if(j>=0)  sum+=b[j]-'0';
       
        ans+=(sum % 2)+'0';         // convert integer into string.
        carry=sum/2 ;
        i--,j--;
     }
      reverse(ans.begin(),ans.end());
      return ans;
}
int main(){
    string a="1101";
    string b="1010";
    cout<<addBinary(a,b);
    return 0;
}