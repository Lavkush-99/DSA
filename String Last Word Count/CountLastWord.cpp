#include<iostream>
#include<vector>
using namespace std;
void countLastWord(string s,int i){
    string temp;
    int count=0,j=0;

    while(s[i]==' ') i--;
    while(i>=0 && s[i]!=' '){
          count++;
          temp.push_back(s[i]);
          i--;      
        }
    cout<<"Last word count letter : "<<count<<endl;
    cout<<"the starting index of the last index : "<<i+1<<endl;
    cout<<"The Last word : ";
    for(int k=temp.size()-1;k>=0;k--){
        cout<<temp[k]<<"";
    }
   
}
int main(){
    string s="name lavkush yadav    ";
    int i=s.size()-1;
    countLastWord(s,i);
    return 0;
}