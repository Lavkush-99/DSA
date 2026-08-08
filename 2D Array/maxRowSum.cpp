#include<iostream>
#include<climits>
using namespace std;
int maxRowSum(int matrix[][2],int r,int c){
    int maxSum=INT_MIN;
        for(int i=0;i<r;i++){
            int rowSum=0;
            for(int j=0;j<c;j++){
                rowSum+=matrix[i][j];
            }
            maxSum=max(maxSum,rowSum);
        }
        return maxSum;
}
int main(){
    int r=3,c=2;
    int matrix[3][2];
    cout<<"Enter matrix element with single space: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
   cout<<"The maximum row sum is: "<< maxRowSum(matrix,r,c);
}