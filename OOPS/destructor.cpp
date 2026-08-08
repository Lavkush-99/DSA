#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    public:
     student(string name,int roll){
        this->name=name;
        this->roll=roll;
     }
     
     ~student(){
        cout<<"I delete Pointer and object everyThing.";
     }
     void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<roll<<endl;
     }
};

int main(){
    student s1("Lavkush",29);    
    s1.getInfo();
    return 0;
}