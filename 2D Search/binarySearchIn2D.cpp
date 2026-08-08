#include<iostream>
#include<vector>            // TC=O(log(m*n))
using namespace std;
bool searchInRow(vector<vector<int>>&matrix,int tar,int mid,int n){
    int st=0,end=n-1;
    while(st<=end){
        int midCol=st+(end-st)/2;
        if(tar==matrix[mid][midCol]){
            return true;
        }else if(tar>matrix[mid][midCol]){
            st=midCol+1;
        }
        else{
            end=midCol-1;
        }

    }
    return false;

}
bool binarySearch(vector<vector<int>>&matrix,int tar){
    int m=matrix.size();
    int n=matrix[0].size();
    int stRow=0,endRow=m-1;
    while(stRow<=endRow){
        int midRow=stRow+(endRow-stRow)/2;
        if(tar>=matrix[midRow][0] && tar<=matrix[midRow][n-1]){
            return searchInRow(matrix,tar,midRow,n);
        }
        else if(tar>matrix[midRow][n-1]){
            stRow=midRow+1;
        }
        else{
            endRow=midRow-1;
        }
    }
    return false;

}
int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Entered matrix: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int tar;
    cout<<"Enter target: ";
    cin>>tar;
    cout<<"Target lie in the 2D array: "<<binarySearch(matrix,tar);
    return 0;


}