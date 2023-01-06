/*Program No-P439.cpp
dt-1-5-2023
Concept-Inheritance
Next Program-Biggest of 4 Numbers using Inheritance
-----------------------------------------------------------------------------------------------------
Note-1:

Inheritance:
  
    Derive Properties and Characteristics from Existing Class.
    
-----------------------------------------------------------------------
Note-2:
New Class -> Derived Class/ sub class/ child class  are all same.

Existing Class -> Base Class/ Parent Class / Super Class are all same.
-----------------------------------------------------------------------------------------------------
Note-3:

We can access the PROTECTED member from the Base Class into the New Class.
----------------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Big3
{

    private:
        int n1,n2,n3;
        
    protected:
        int result;
        
    public:
        void read();
        void findbig3();
        void display();
        
};

void Big3::read()
{

    cin>>n1>>n2>>n3;
}

void Big3::findbig3()
{
    int s;
    
    s=n1>n2?n1:n2;

    result=s>n3?s:n3;

}

void Big3::display()
{
    cout<<"Biggest of 3 Numbers = "<<result; 

}


class Big4:public Big3
{

    private:

        int n4;
        
    public:

        void read()
        {
            Big3::read();
            
                cin>>n4;
        
        }    
        
        void findbig3()
        {
            result=result>n4?result:n4;
        
        }
        
        void display()
        {
        
            cout<<"Biggest of 4 Numbers="<<result;
        }
        

};

int main()
{
    Big4 obj;
    obj.read();
    obj.findbig3();
    obj.display();

} 
