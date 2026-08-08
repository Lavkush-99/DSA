#include<iostream>          // TC=O(n).
using namespace std;
int main(){
    string chars;
    cin>>chars;
    int idx=0,n=chars.length();
    for(int i=0;i<n;i++){
        char ch=chars[i];
        int count =0;
        while(i<n && chars[i]==ch){
            count++,i++;

        }
        if(count==1){
            chars[idx++]=ch;
        }
        else{
            chars[idx++]=ch;
            string str=to_string(count);
            for(char dig:str){
                chars[idx++]=dig;
            }
            i--;
        }

    }
    chars.resize(idx);
    cout<<"Enter char: ";
    for(char ch:chars){
        cout<<ch<<" "; 
    }
    return 0;
}