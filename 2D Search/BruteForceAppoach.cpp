#include<iostream>
using namespace std;
bool bruteForceSearch(int matrix[3][3],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]==target){
             pair<bool,pair<int,int>>p={true,{i,j}};
               cout<<"Value exist: "<<p.first<<endl;
               cout<<"position where target occur: "<<p.second.first<<" "<<p.second.second<<endl;

            }
        }
    }
    return false;
}
int main(){
    int matrix[3][3],tar;
    cout<<"Enter matrix: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter tar: ";
    cin>>tar; 
   bruteForceSearch(matrix,tar);
    return 0;
}
