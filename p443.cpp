/*Program No-P443.cpp
dt-1-13-2023
Concept-Inheritance
Next program-Read and Display Allowance and Deduction for employee
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
                      
           cout<<"Employee ID"<<"Employee Designation"<<"salary"<<'\n';
           Employee::read(); 
                        
        }
        
        void calculate()
        {
            cout<<"Enter Salary for Hra"<<'\n'<<"Enter Salary for DA"<<'\n';        
            hra=(0.5 * salary);
            da =(0.2 * salary);
        
        }
        
        void display()
        {
           
            cout<<"HRA="<<hra<<"DA"<<da;
        
        }       

};

class deduction:public Employee
{

    private:
        float pf;
        
    public:
        void read()
        {
            Employee::read();
        
        }
        void calculate()
        {
        
            pf=(0.12*salary); 
        }
        
        void display()
        {
        
            Employee::display();
            cout<<"PF"<<pf;
        
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