#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"Size of vector: "<<vec.size()<<endl;
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(6);
    cout<<"Capacity of the vector: "<<vec.capacity()<<endl;
    cout<<"Size of vector after pussing: "<<vec.size()<<endl;
    cout<<"After pushing vector is: ";
    for(int val:vec){
        cout<<val<<" ";
    }
    vec.pop_back();
    cout<<"Size of vector after poping: "<<vec.size()<<endl;
    cout<<"First element: "<<vec.front()<<endl;
    cout<<"last element: "<<vec.back()<<endl;
    cout<<"At given index element: "<<vec.at(1);
    return 0;

    
}