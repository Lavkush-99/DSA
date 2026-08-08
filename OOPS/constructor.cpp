#include<iostream>
using namespace std;
class Teacher{

    public:
     string name1;
     string name2;
     string interest;
     int roll;
     string department;
     Teacher(){                                             // non parametrised constructor.
           cout<<"Non parametrised constructor."<<endl;
        }
        
    Teacher(string Name,string department ){    // parametrised constructor.
        name1=Name;
        this->department=department;
    }
    Teacher(string department){            // Default copy constructor.
        this->department=department;
    }
    void getInfo1(){
        cout<<"Default copy constructor called."<<endl;
        cout<<"Department : "<<department<<endl;
    }
};
int main(){
    Teacher t1;
    t1.name1="Lavkush";
    cout<<t1.name1<<endl;

    Teacher t2("Sanjay","computer science");
    cout<<"Parametrised constructor."<<endl;
    cout<<t2.name1<<endl;

    Teacher t3("Chemical engineering");
    Teacher t4(t3);                        // Default copy constructor.
    t4.getInfo1();
    return 0;
}
