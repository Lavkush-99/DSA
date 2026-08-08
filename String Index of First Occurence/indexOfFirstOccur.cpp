#include<iostream>
#include<vector>
using namespace std;
int firstOccurenceIdx(string s,string x,int n,int m){
    for(int i=0;i<=n-m;i++){
        int j=0;
        while(j<m && s[i+j]==x[j]){
            j++;
        }
        if(j==m)  return i;
    }
    return -1;  
}
int main(){
    string s="lavkush yadav";
    string x="kush";
    int n=s.size();
    int m=x.size();
    int ans=firstOccurenceIdx(s,x,n,m);
    cout<<ans;
    return 0;
}