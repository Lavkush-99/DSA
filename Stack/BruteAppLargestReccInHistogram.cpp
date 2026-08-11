#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>height={2,1,5};
    int maxArea=0;
    int wt;
    int n=height.size();
    for(int i=0;i<n;i++){
        int minHt=height[i];

        for(int j=i;j<n;j++){
             wt=j-i+1;
             minHt=min(minHt,height[j]);
            maxArea=max(maxArea,wt*minHt);
          
        }
    }
    cout<<maxArea;
    return 0;
}