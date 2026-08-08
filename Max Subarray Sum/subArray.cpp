#include<iostream>
#include<vector>
using namespace std;
void subArray(vector<int>vec,int n){
    int st=0,end=vec.size()-1;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<end;i++){
                cout<<vec[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

}
int main(){
    vector<int>vec={3,4,2,1,5,6};
    int n=vec.size();
    subArray(vec,n);
    return 0;
}
