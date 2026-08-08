#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSumArraySum(vector<int>vec){
    int maxSum=INT_MIN;
    int n=vec.size();
    int curSum=0;
    for(int i=0;i<n;i++){
       curSum+=vec[i];
       maxSum=max(maxSum,curSum);
       if(curSum<0){
        curSum=0;
       }
        

    }
 return maxSum;
}
int main(){
    vector<int>vec={3,5,-1,4,-6,7,9};
    cout<<"maximum subArraySum is:"<<maxSumArraySum(vec);
    return 0;
}