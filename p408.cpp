/*Program No-P408.cpp
dt-12-8-2022
Language - c++
Concept-Scope Resolution Operator
Next Program-Area of Circle using Scope Resolution Operators
---------------------------------------------------------------------*/
#include<iostream>
using namespace std;

float r, aoc;

int main()
{

    float r, aoc;
    
    cin>>r;
    
    aoc = 3.14 * r * r;
    
    cout<<"Area of Circle using Local Variable ="<<r;


        
    cin>>::r;
    
    ::aoc = 3.14 * ::r * ::r;     

    cout<<"Area of Circle using Scope Resolution Operator since local and Global variables are same and access the Global variable using Scope Resolution Opertor="<<::aoc;


}

    