/*Program No-P436.cpp
dt-1-2-2023
Concept-"This" key word in Constructor Overloading
Keyword->This
Next Program-Sum of Two Numbers using Constructor OverLoading
----------------------------------------------------------------------------------------
Note:
    When Member variable and constructors variable are same to differentiate the member
    variable when assigning constructor variable to member variable we can use "this"
    Keyword.
----------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class sum
{

    private:
            int fn,sn,result;
    
    public:
            sum() // Defined constructor
            {
                fn=7;
                sn=10;                      
            
            }
            
            sum(int fn) // constructor variable and private member variable are same.so in order to differentiate we use this keyword.
            {
                this->fn=fn;
                sn=7;
            
            }
            
            sum(int fn,int sn)
            {
            
                this->fn=fn;
                this->sn=sn;
            
            }

void findsum();
void display();
};

void sum::findsum()
{
    result=fn+sn;

}
void sum::display()
{
    cout<<result;

}

int main()
{

    sum s;
    s.findsum();
    s.display();
    
        int firstnum;
        cin>>firstnum;
        
        
            sum s2(firstnum);
            s2.findsum();
            s2.display();
            
                int secondnum;
                cin>>secondnum;
                
                    sum s3(firstnum,secondnum);
                    s3.findsum();
                    s3.display();   

     
}
    
    