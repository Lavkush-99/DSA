#include<iostream>
#include<vector>
using namespace std;
 string removeOccurences(string &s,string part){
    while(s.length()>0 && s.find(part)<=s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
 }
int main(){
    string s;
    cout<<"Enter string: ";
       getline(cin,s);
     
    cout<<endl;
    string part;
    cout<<"Enter part: ";   
       getline(cin,part);
        cout<<endl;
    removeOccurences(s,part);
    cout<<"After remove all occurences the string is: "<<s;
   return 0;

}
