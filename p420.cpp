/*Program No-P420.cpp
dt-12-12-2022
Language-c++
Concept-PRIVATE ACCESS MODIFIERS
Next Program-Area of Circle using Private Access Modifiers using c++
---------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

typedef struct areaofcircle
{

    private:
     
        float area;
        int r;

    public:

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

    area=3.14 *r * r;

}

void aoc::display()
{
    
    cout<<"Area of Circle="<<area<<'\n';

}

int main()
{

    aoc a;
    
    a.read();
    a.calculate();
    a.display();

}
