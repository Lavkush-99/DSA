#include<iostream>
#include<climits>
using namespace std;
int main(){
    int smallest=INT_MAX;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int j=0;j<5;j++){
        if(smallest>arr[j]){
            smallest=arr[j];
        }
    }
    cout<<"The smallest number is :"<<smallest;
    return 0;

}