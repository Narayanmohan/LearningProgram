/*Program No-P407.cpp
dt-12-8-2022
New Concept-Scope Resolution Operator ::
Next Program-Sum of Two Numbers using scope resolution operator
------------------------------------------------------------------
Note:

    Scope Resolution Opeartor
    
            -To access the Global variable when there is a 
Local variable with the same name.
----------------------------------------------------------------*/
#include<iostream>
using namespace std;

//Global Variable 

int fN,sN,sum;

int main()
{

//Local variable
int  fN, sN,sum;

    cin>>fN>>sN;
    sum = fN + sN;
    cout<<"Sum of Two Numbers using local variable ="<<sum;


// The above 3 Lines are NOT really needed, but for to understand the scope resolution operator typed those 3 lines.



// The below 3 lines of code are using scope resolution operator to access the Global variable.

    cin>>::fN>>::sN;

    ::sum=::fN + ::sN;
    
    cout<<"Sum of Two Numbers using scope resolution Operator :: "<<::sum;
    
    
}