#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>&vec,int st,int end,int mid){
    int i=st,j=mid+1,invCount=0;
    vector<int>temp;
    while(i<=mid && j<=end){
        if(vec[i]<=vec[j]){
            temp.push_back(vec[i]);
            i++;
        }else{
            temp.push_back(vec[j]);
            j++;
            invCount+=(mid-i+1);
       }    }
        while(i<=mid){
            temp.push_back(vec[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(vec[j]);
            j++;
        }
        for(int idx=0;idx<temp.size();idx++){
            vec[st+idx]=temp[idx];
        }  
    return invCount;
}
int mergeSort(vector<int>&vec,int st,int end){
    if(st<end){
        int mid= st+(end-st)/2;
       int leftInverCount= mergeSort(vec,st,mid);
       int rightInverCount= mergeSort(vec,mid+1,end);
        int inversionCount=merge(vec,st,end,mid);
        return inversionCount+leftInverCount+rightInverCount;
    }else return 0;
}
int main(){
    vector<int>vec={6,3,5,2,7};
    int st=0,end=vec.size()-1;
   int ans= mergeSort(vec,st,end);
   cout<<"Total valid pair : "<<ans;
    return 0;
}