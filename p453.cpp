/*Program No-P453.cpp
dt-2-1-2023
Language-c++
Next Program-Sum of 2 complex number using Arithmetic + Operator Overloading
-----------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class complex
{
    private:
    
        int x,y;
    
    public:
        void read();
        complex operator +(complex c);
        void display();
        
};

void complex::read()
{
    cin>>x>>y;

}

complex complex::operator +(complex c)
{

    complex temp;
    
    temp.x=this->x +c.x;
    temp.y=this->y +c.y;

    return temp;


}

void complex::display()
{

    cout<<this->x<<"+i"<<this->y;
}

int main()
{
    complex c1,c2,sum;
    c1.read();
    c2.read();
    
        sum=c1+c2;
        sum.display();


}