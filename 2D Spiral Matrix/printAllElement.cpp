#include<iostream>
#include<vector>
using namespace std;
vector<int>spiralPrint(vector<vector<int>>&mat,int n,int m){
    vector<int>ans;
    int stRow=0,endRow=m-1,stCol=0,endCol=n-1;
    while(stRow<=endRow && stCol<=endCol){
        for(int j=stCol;j<=endCol;j++){  //TOP
            ans.push_back(mat[stRow][j]);
        }
        for(int i=stRow+1;i<=endRow;i++){    //RIGHT
            ans.push_back(mat[i][endCol]);
        }
        for(int j=endCol-1;j>=stCol;j--){
            if(stRow==endRow){
                break;
            }        //BUTTOM
            ans.push_back(mat[endRow][j]);
        }
        for(int i=endRow-1;i>=stRow+1;i--){      // LEFT
            if(stCol==endCol){
                break;
            }
            ans.push_back(mat[i][stCol]);
        }
        stRow++,endRow--,stCol++,endCol--;
    }
    return ans;
}
int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    int m=matrix.size(),n=matrix[0].size();
    vector<int>ans=spiralPrint(matrix,n,m);
    cout<<"The matrix element print in spiral formet: ";
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}