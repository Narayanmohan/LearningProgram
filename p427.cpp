/*Program No-P427.cpp
dt-12-27-2022
Concept-Default-Construtors -> There is No Parameters in the constructor.
Next Program-Sum of Two Numbers using default constructors
-------------------------------------------------------------------------
Meaning of Constructors:

    To initialize the object or to initialize the data members while
    creating object.
    Constructor is also a function.
    Class Name is a constructor Name.
-------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

class Sum
{

    private:
        int fn,sn,result;
    
    public:
        Sum()
        {        
            fn=7;
            sn=10;               
        }

void findsum();
void display();

};

void Sum::findsum()
{
    result=fn+sn;    

}

void Sum::display()
{
    cout<<"Sum of Two Number="<<result;

}

int main()
{

    Sum obj;
    obj.findsum();
    obj.display();

}

    
    
