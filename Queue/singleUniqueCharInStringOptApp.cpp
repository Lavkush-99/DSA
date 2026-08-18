#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
int main(){
    unordered_map<char,int>m;
    queue<int>q;
    string s;
    cout<<"Enter String : ";
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(m.find(s[i])==m.end()){
            q.push(i);
        }
        
        m[s[i]]++;            // increase freq of element in map.
        
        while(q.size()>0 && m[s[q.front()]]>1){
            q.pop();
        }
    }
    
   if(q.empty()){
    cout<<"answer is : -1.";
   }
   else{
    cout<<"Now answer is : "<<s[q.front()]<< " and at idx : "<<q.front();
   }
   return 0;
}