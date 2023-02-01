/*Program No-P455.cpp
dt-2-1-2023
Concept-Operator OverLoading
Next Program-Product of 2 complex numbers using Operator Overloading
---------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class prodcomplex
{
    
    private:
        int x,y;
    
    public:
        void read();
        prodcomplex operator *(prodcomplex c);
        void display();

};

void prodcomplex::read()
{
    cin>>x>>y;

}

prodcomplex prodcomplex::operator *(prodcomplex c)
{

    prodcomplex temp;
    
    temp.x=this->x*c.x - this->y * c.y;
    temp.y=this->x*c.y + this->y * c.x;
    
    return temp;

}

void prodcomplex::display()
{

    cout<<this->x<<"+i"<<this->y;
}

int main()
{

    prodcomplex c1,c2,prod;
    
        c1.read();
        c2.read();
            prod = c1 *c2;
            prod.display();


}