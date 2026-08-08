#include<iostream>
#include<vector>
using namespace std;
int maximumWater(vector<int>box){
    int n=box.size();
    int lp=0,rp=n-1;
    int maxWater=0;
    while(lp<rp){
        int ht=min(box[lp],box[rp]);
        int wt=rp-lp;
        maxWater=max(maxWater,ht*wt);
        box[lp]<box[rp]?lp++:rp--;
    }
    return maxWater;

}
int main(){
    vector<int>container={1,8,6,2,5,4,8,3,7};
    cout<<"The maximum water is: "<<maximumWater(container);
    return 0;
}