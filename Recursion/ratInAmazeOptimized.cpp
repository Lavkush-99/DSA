#include<iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>>&maze,int r,int c,int n, string path,vector<string>&ans){
    if(r<0 || c<0 || r>n-1 || c>n-1 || maze[r][c]==0 ||  maze[r][c]==0 )  return;   // Base case.
    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return ;
    }
    maze[r][c]=0;   // mark element are visited.

    helper(maze,r+1,c,n,path+"D",ans);
    helper(maze,r-1,c,n,path+"U",ans);
    helper(maze,r,c+1,n,path+"R",ans);
    helper(maze,r,c-1,n,path+"L",ans);

    maze[r][c]=1;  // remove mark of visited.
}
vector<string>findPath(vector<vector<int>>&maze){
    vector<string>ans;
    int n=maze.size();
    string path="";
   helper(maze,0,0,n,path,ans);
    return ans;
}
int main(){
    vector<vector<int>>maze={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string>ans=findPath(maze);
    for(string path:ans){
        cout<<path<<endl;
}
return 0;
}