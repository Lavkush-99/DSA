#include<iostream>
using namespace std;
int main(){
    int matrix[3][2];
    cout<<"Enter matrix(3*2): ";
    for(int i=0;i<3;i++){        // INPUT BY USER.
        for(int j=0;j<2;j++){
            cin>>matrix[i][j];
        }
    }cout<<endl;
    
    for(int i=0;i<3;i++){        // PRINT.
        for(int j=0;j<2;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}