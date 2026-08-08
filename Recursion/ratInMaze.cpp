#include<iostream>
#include<vector>    // TC = O(4 the power n square).
using namespace std;
void helper(vector<vector<int>>&maze,int r,int c,string path,vector<string>&ans,vector<vector<bool>> &visit){
    int n=maze.size();
    if(r<0 || c<0 || r>=n || c>=n || maze[r][c]==0 || visit[r][c]== true){
        return;
    }
    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return;
    }
    visit[r][c]=true;   // visited.

    helper(maze,r+1,c,path+"D",ans,visit);   // down.
    helper(maze,r-1,c,path+"U",ans,visit);   // upper.
    helper(maze,r,c+1,path+"R",ans,visit);   // right.
    helper(maze,r,c-1,path+"L",ans,visit);   // left.

    visit[r][c]=false;  // unvisited.


}
vector<string>findPath(vector<vector<int>>&maze){
    vector<string>ans;
    int n=maze.size();
    vector<vector<bool>>visit(n,vector<bool>(n,false));
    string path="";
    helper(maze,0,0,path,ans,visit);
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