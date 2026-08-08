#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     vector<char>s={'l','a','v','k','u','s','h'};
      int n =s.size();
    cout<<"before swapping: ";
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    int st=0,end=n-1;
    while(st<end){
        swap(s[st++],s[end--]);    }
    cout<<"After swapping: ";
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;

    string s1="Lavkush";
    reverse(s1.begin(),s1.end());
    cout<<"string: "<<s1<<endl;
   
}