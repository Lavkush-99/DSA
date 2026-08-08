#include<iostream>
#include<algorithm>
using namespace std;
string reverseString(string s,int n){
    string ans="";
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
         string word="";
         while(i<n && s[i]!=' '){
              word+=s[i];
              i++;
            }
         reverse(word.begin(),word.end());
        if(word.length()>0)
           ans+=' '+word;
    }
    return ans.substr(1);
}
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    int n=s.length();
    cout<<endl;
    cout<<n;
    cout<<"The reverse word in string is: "<<reverseString(s,n);
    return 0;
}