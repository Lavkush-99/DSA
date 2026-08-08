#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int roll;   

    person(){
        cout<<"parent"<<endl;
     }
     
};
class student : public person{  // inheritence.
    public:
     string branch;
    student(){
        cout<<"child"<<endl;
    }
    
    void getInfo(){
           cout<<"Name : "<<name<<endl;
           cout<<"Roll : "<<roll<<endl;
           cout<<"Branch : "<<branch<<endl;
        }
};
int main(){
    student s1;
    s1.name="Lavkush yadav";
    s1.roll=29;
    s1.branch="AI&ML";
    s1.getInfo();
    return 0;
}