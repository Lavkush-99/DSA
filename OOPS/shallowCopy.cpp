#include<iostream>
using namespace std;
class student{
    string name;
    int* cgpaPtr;
    public:
     student(string name,int cgpa){
        this->name=name;
        cgpaPtr=new int;
       *cgpaPtr=cgpa;
     }
     student(student &obj){
        this->name=obj.name;
        this->cgpaPtr=obj.cgpaPtr;
     }
     int changeCgpa(int newCgpa){
        *cgpaPtr=newCgpa;
        return *cgpaPtr;
     }
     void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
     }
};
int main(){
    student s1("Lavkush",8.5);
    student s2(s1);
    s1.getInfo();
    s2.changeCgpa(9.0);
    s2.getInfo();
    return 0;
}