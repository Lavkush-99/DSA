#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubArraySum(vector<int>vec){
    int n=vec.size();
    int st,end=n-1;
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++){
        int curSum=0;
        for(int end=st;end<n;end++){
            curSum+=vec[end];


        }
        maxSum=max(curSum,maxSum);
    }
    return maxSum;

}
int main(){
    vector<int>vec={2,-4,3,6,-5,7,9};
    cout<<"Maximum subArray Sum: "<<maxSubArraySum(vec);
}