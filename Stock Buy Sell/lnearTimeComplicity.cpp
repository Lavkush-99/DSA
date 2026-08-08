#include<iostream>
#include<vector>
using namespace std;
int stockBuySell(vector<int>prices){
    int bestBuy=prices[0];
    int maxProfit=0;
    int n=prices.size();
    for(int i=0;i<n;i++){
        bestBuy=min(prices[i],bestBuy);
        int currProf=prices[i]-maxProfit;
        maxProfit=max(maxProfit,currProf);

    }
    return maxProfit;

}
int main(){
    vector<int>prices={7,2,1,4,6,8};
    cout<<"The maximum profit: "<<stockBuySell(prices);
}