#include<iostream>
#include<vector>          // Header file.
using namespace std;
int main(){
vector<int>vec1;
vector<int>vec2={2,3,4,5};
cout<<vec2[0]<<endl;

vector<int>vec3(3,0);
for(int val:vec3){
    cout<<val<<" ";
}
return 0;
}

