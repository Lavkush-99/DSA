#include<iostream>
using namespace std;
int main(){
    char str[]={"Lavkush Yadav"};
    cout<<"Each charector of the str: ";
    for(char ch:str){
        cout<<ch<<" ";
    }
    cout<<endl;
    int len=1,i=0;
    while(str[i]!='\0'){
        len++,i++;
    }
    cout<<"length of the str: "<<len;
}