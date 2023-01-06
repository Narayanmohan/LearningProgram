/*Program No-P440.cpp
dt-1-6-2023
Concept-Inheritance
Samllest of 4 Numbers using Inheritance
--------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class small3
{
    private:
    
        int n1,n2,n3;
        
    protected:
    
        int result;

    public:
        
        void read();
        void findsmall();
        void display();

};

void small3::read() // Here we are accessing the read() class outside of class hence we are using scope operator.
{

    cin>>n1>>n2>>n3;

}

void small3::findsmall()
{
    int s;
    s=n1<n2?n1:n2;
    
    result=s<n3?s:n3;

}

void small3::display()
{

    cout<<result;
    
}

class small4:public small3
{
    
    private:
        
        int n4;
        
    public:
        
        void read()
        {
        
            small3::read();
            
                cin>>n4;
                
        }     
        
        void findsmall()
        {
        
            small3::findsmall();
            
                result=result<n4?result:n4;
        
        }
        
        void display()
        {
        
            cout<<"Smallest of 4 Number is = "<<result;
        }
        

};

int main()
{

    small4 obj;
    obj.read();
    obj.findsmall();
    obj.display();

}