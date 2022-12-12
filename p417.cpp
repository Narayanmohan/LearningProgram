/*Program No-P417.cpp
dt-12-12-2022
Concept-Binding Members and Function inside typedef and Accessing Members and Function using scope operator
Next Program-Area of circle with Binding Members and Function inside the typedef
------------------------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
typedef struct areaofcircle
{

    float area;
    int r;

        void read();
        void calculate();
        void display();

}aoc;


void aoc::read()
{
    cin>>r;

}

void aoc::calculate()
{
    area =3.14 * r * r;

}

void aoc::display()
{
    cout<<'\n'<<"Area of Circle= "<<area<<'\n';

}

int main()
{

    aoc a;
    
    a.read();
    
    a.calculate();
    
    a.display();

}