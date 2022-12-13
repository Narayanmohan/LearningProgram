/*Program No-P423.cpp
dt-12-13-2022
Concept - CLASS
Next Program-Area of Circle using Class
---------------------------------------------------------------------*/
#include<iostream>
using namespace std;

class Areaofcircle
{
    private:
    
        float area;
        int r;

    public:
        void read();
        void calculate();
        void display();    

};

void Areaofcircle::read()
{
    cin>>r;
}

void Areaofcircle::calculate()
{

   area = 3.14 * r * r;
    
}

void Areaofcircle::display()
{

    cout<<area;
}

int main()
{

    Areaofcircle a;
    
        a.read();
        a.calculate();
        a.display();

}
