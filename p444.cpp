/*Program No-P444.cpp
dt-1-17-2023
Concept-MultipleInheritance
Next Program-Read and Calculate and display of payroll process using Multiple Inheritance
-----------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
#include "p443.cpp"
class payroll:public allowance,deduction
{

    public:
        void read()
        {
            cout<<"Emp.Name-Age-Gen-Address"<<'\n'; 
            cout<<"Enter Empid-Desig-Salary"<<'\n';
        
                allowance::read();
                deduction::read();
        
        }

       void display()
       {
            cout<<"HRA-DA-DETAILS-BELOW"<<'\n';   
            cout<<"HRA="<<"DA";        
        
               allowance::display();
               deduction::display();
           
       } 
       
       void calculate()
       {
       
       cout<<"HRA-DA-ALLOWANCE CALCULATED HERE";
       cout<<"HRA="<<"DA"<<'\n';
     
       cout<<"HRA-DA-ALLOWANCE CALCULATED HERE";
       cout<<"HRA="<<"DA"<<'\n';

       
           allowance::calculate();
           deduction::calculate();
       
       }
       
};

int main()
{

    payroll obj;
    obj.read();
    obj.calculate();
    obj.display();    

}




