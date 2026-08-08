#include<iostream>
#include<string>
using namespace std;
class Teacher{

    private:
      double salary;

    public:
     string name;
     string department;
     string changeDepartment(string newDepartment){
        department=newDepartment;
        cout<<department<<endl;
     }     
};

int main(){

    Teacher t1;
    t1.name="Lavkush Yadav";   
    t1.department="Computer science and engineering.";
    
    cout<<t1.name<<endl;
    cout<<t1.department<<endl;
    t1.changeDepartment("Chemical engineering");
    return 0;
}