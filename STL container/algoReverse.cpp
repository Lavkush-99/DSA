#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={4,2,3,6};
    reverse(vec.begin(),vec.end());  // can also reverse the vector some part as i specified.
    for(int val:vec){
        cout<<val<<" ";
    }
}
  