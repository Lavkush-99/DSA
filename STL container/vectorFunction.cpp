#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size "<<vec.size()<<" capacity "<<vec.capacity()<<endl;
    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(4);
    vec.push_back(9);

    vec.emplace_back(1);
    
    cout<<"size "<<vec.size()<<"  capacity "<<vec.capacity()<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;


    vec.erase(vec.begin());
    vec.erase(vec.begin(),vec.begin()+2);
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;


    vec.insert(vec.begin(),100);
    vec.insert(vec.begin()+2,50);
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    vec.clear();

    cout<<"vec: ";
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int>vec1={1,2};

    vector<int>vec2(vec1);

    cout<<"vec2: ";
    for(int val:vec2){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"isEmpty "<<vec1.empty();


}