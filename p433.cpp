/*Program No-P433.cpp
dt-1-2-2023
Concept-Constructor Overloading
Next Program-Sum of two numbers using Constructor Overloading
------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class sum
{

    private:
         int fn,sn,result;
    
    public:
        sum() // default constructor
        {
        
          fn=10;
          sn=7;
        
        }

        sum(int num1)
        {
        
            fn=num1;
            sn=8;        
        }


        sum(int x, int y)
        {
            fn=x;
            sn=y;
        
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
    
        int firstnumber;
        cin>>firstnumber;
        
        sum s2(firstnumber);
        s2.findsum();
        s2.display();


        int secondnumber;
        cin>>secondnumber;
        
            sum s3(firstnumber,secondnumber);
            s3.findsum();
            s3.display();


}

