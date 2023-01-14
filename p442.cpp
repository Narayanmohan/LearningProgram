/*Program No-P442.cpp
dt-1-9-2023
Concept-Inheritance
Next Program-Read and Display details of Employee and student
----------------------------------------------------------------------*/
#include<iostream>
using namespace std;
#include "p441.cpp"
class Employee:public person
{
    private:
        int empid;
        char desig[1000];
        
    protected:
        
        float salary; 
        
        // Purposly made to protected because in program No# 443.cpp we are going to use the salary
        // if want to use member variable in outside of the class we have to make this member variable to Protected

    public:
        void read()
        {
        
            person::read();
            cin>>empid>>desig>>salary;
        
        }
        void display()
        {
            person::display();
            cout<<empid<<desig<<salary;
        
        }
};

class student:public person
{

    private:
        int rollno;
        char course[1000];
        int marks;
        
        
    public:
        void read()
        {
            person::read();
            cin>>rollno>>course>>marks;
        
        } 
        void display()
        {
            person::display();
            cout<<rollno<<course<<marks;
        
        }

};

/*// The below block has been commented due to inheritance call on next program P443.cpp
int main()
{

    Employee obj;
    obj.read();
    obj.display();
    
    student obj2;
    obj2.read();
    obj2.display();

}*/
