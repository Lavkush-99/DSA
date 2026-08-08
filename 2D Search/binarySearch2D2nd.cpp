/*   1 5 9
     2 6 10
     3 8 11  */
     
#include<iostream>     // TC=O(m+n);
#include<vector>
using namespace std;
bool binarySearch(vector<vector<int>>&mat,int tar){
    int m=mat.size(),n=mat[0].size();
    int r=0,c=n-1;
    while(r<m && c>=0){
        if(tar==mat[r][c]){
            return true;
        }
        else if(tar>mat[r][c]){
            r++;
        }
        else{
            c--;
        }

    }
    return false;

}
int main(){
    vector<vector<int>>matrix={{1,5,9},{2,6,10},{3,8,11}};
    cout<<"Entered matrix: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    cout<<"The target lie or not: "<<binarySearch(matrix,target);

}