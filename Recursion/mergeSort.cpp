#include<iostream>
#include<vector>    // TC=O(n*log(n)). SC=O(n).
using namespace std;
void merge(vector<int>&vec,int st,int end,int mid){
    vector<int>temp;
    int i=st,j=mid+1;
      while(i<=mid && j<=end){        
             if(vec[i]<=vec[j]){
                 temp.push_back(vec[i]);
                  i++;
                }else{
                     temp.push_back(vec[j]);
                      j++;
                    }
            }

        while(i<=mid){
             temp.push_back(vec[i]);
             i++;
            }
        while(j<=end){
            temp.push_back(vec[j]);
            j++;
        }
        for(int idx=0;idx<temp.size();idx++){
            vec[idx+st]=temp[idx];
        }
    }
void mergeSort(vector<int>&vec,int st,int end){
   
   if(st<end){
        int mid=st+(end-st)/2;
        mergeSort(vec,st,mid);
        mergeSort(vec,mid+1,end);
        merge(vec,st,end,mid);

    }
}
int main(){
    vector<int>vec={5,8,3,4,2,1};
    int st=0,end=vec.size();
    mergeSort(vec,st,end);
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}