/*Program No-P443.cpp
dt-1-13-2023
Concept-Inheritance
Next program-Read and Display Allowance and Deduction for employee
---------------------------------------------------------------------
Input and output as follows:
Emp.Name-Age-Gen-Address
Enter Empid-Desig-Salary
MEERA
97
FEMALE
42580DREAMWEAVER
1007
SAINT
147800
HRA-DA-DETAILS-BELOW
HRA=73900DA29560

MEERA
97
FEMALE
42580DREAMWEAVER
1007
SAINT
147800
73900
29560
Emp.Name-Age-Gen-Address
Enter Empid-Desig-Salary
MEERA
97
FEMALE
42580DREAMWEAVER
1007
SAINT
147800
For Second Object InstanceEmp.Name-Age-Gen-Address
Enter Empid-Desig-Salary

MEERA
97
FEMALE
42580DREAMWEAVER
1007
SAINT
147800
PF17736
---------------------------------------------------------------------*/
#include<iostream>
using namespace std;
#include "p442.cpp"
class allowance:public Employee
{

    private:
        float da;
        float hra;

    public:
        void read()
        {
        
           cout<<"Emp.Name-Age-Gen-Address"<<'\n'; 
           cout<<"Enter Empid-Desig-Salary"<<'\n';
                                       
           Employee::read(); 
                        
        }
        
        void calculate()
        {
                   
            hra=(0.5 * salary);
            da =(0.2 * salary);
        
        }
        
        void display()
        {
            cout<<"HRA-DA-DETAILS-BELOW"<<'\n';   
            cout<<"HRA="<<hra<<"DA"<<da<<'\n';

            Employee::display();
            cout<<'\n'<<hra<<'\n'<<da;
        }       

};

class deduction:public Employee
{

    private:
        float pf;
        
    public:
        void read()
        {
           cout<<'\n'<<"Emp.Name-Age-Gen-Address";
           cout<<'\n'<<"Enter Empid-Desig-Salary"<<'\n';

           Employee::read();
        
        }
        void calculate()
        {
        
            pf=(0.12*salary); 
        }
        
        void display()
        { 
        
            cout<<"For Second Object Instance"<<"Emp.Name-Age-Gen-Address"<<'\n';

            cout<<"Enter Empid-Desig-Salary"<<'\n';
                
            Employee::display();

            cout<<'\n'<<"PF"<<pf<<'\n';
        
        }

};


int main()
{
 
     
    allowance obj;
    obj.read();
    obj.calculate();
    obj.display();
    
    deduction obj2;
    obj2.read();
    obj2.calculate();
    obj2.display();
    

}