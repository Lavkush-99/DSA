#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    cout<<"output: "<<s<<endl;
    

    cout<<"string printed by for each loop: ";
    for(char ch:s){
        cout<<ch<<" ";
    }

    cout<<endl;
    cout<<"simple loop apply and printed charector: ";
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }

    return 0;

}
