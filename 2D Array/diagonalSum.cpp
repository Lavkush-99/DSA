#include<iostream>
using namespace std;
void diagonalSum(int matrix[][3],int n){
    int diaSum=0;
    for(int i=0;i<n;i++){
        diaSum+=matrix[i][i];
        if(i!=n-1-i){
            diaSum+=matrix[i][n-1-i];
        }
    }
    cout<<"The diagonal sum is: "<< diaSum;
}
int main(){
    
    int matrix[3][3],n=3;
    cout<<"Enter matrix element with space: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    diagonalSum(matrix,n);   
   return 0;
}