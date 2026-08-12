#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int getCeleb(vector<vector<int>>&v,int n){
    stack<int>s;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    while(s.size()>1){
        int i=s.top();
        s.pop();
        int j=s.top();
        s.pop();
        if(v[i][j]==0){
            s.push(i);
        }
        else{
            s.push(j);
        }
    }
    int celeb=s.top();
    for(int i=0;i<n;i++){
        if(i!=celeb && (v[i][celeb]!=1 || v[celeb][i]!=0)){
            return -1;
        }
       
    }
    return celeb;

}
int main(){
    vector<vector<int>>v={{0,1,0},{0,0,0},{0,1,0}};
    
    int n=v.size();
   
    cout<<"The celebrity people is :"<< getCeleb(v,n);
}