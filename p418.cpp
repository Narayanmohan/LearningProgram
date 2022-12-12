/*Program No-P418.cpp
dt-12-12-2022
Concept-Binding members and Function inside the typedef and Access it members and Function using scope operators
Next Program-Biggest of 3 Numbers using c++
-----------------------------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

typedef struct bigof3num
{
    int a,b,c,t,biggest3;
    
        void read();
        void calculate();
        void big3display();
}big3;

void big3::read()
{
    
    cin>>a>>b>>c;

}

void big3::calculate()
{
    
    t=a>b?a:b;
    
    biggest3 = t>c?t:c;

}

void big3::big3display()
{

    cout<<'\n'<<"Biggest of 3= "<<biggest3<<'\n';
} 

int main()
{

    big3 b3;
    
    b3.read();
    b3.calculate();
    b3.big3display();

}
