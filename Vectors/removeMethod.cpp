#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={2,3,2,2,6,5,2,3,3,6,3};
    vec.erase(vec.begin(),vec.begin()+2);  // delete element in some range as we spaecified.
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    vec.erase(remove(vec.begin(),vec.end(),2),vec.end());  // remove same element at a time in place.Actually delete krta hai.
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    remove(vec.begin(),vec.end(),3);  // Actually me element ko delete nhi krta hai. only shift the element toward right side.Print krne pr old value can bhi print
    for(int j:vec){
        cout<<j<<" ";
    }
}