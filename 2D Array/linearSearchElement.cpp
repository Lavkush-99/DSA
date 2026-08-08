#include<iostream>
using namespace std;
void search(int matrix[][2],int r,int c,int key){
    pair<int,int>p;
     for(int i=0;i<r;i++){
         for(int j=0;j<c;j++){
              if(matrix[i][j]==key){
                   p={i,j};
                    cout<<"Index at which key lies: "<<p.first<<" "<<p.second;
                    break;                
                }                 
           }
        }              
}
int main(){
    int matrix[][2]={1,4,3,2,5,6,7,8};
    int r=4,c=2,target=7;
    search(matrix,r,c ,target);
    return 0;

}