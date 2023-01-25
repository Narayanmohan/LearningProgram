/*Program No-P450.cpp
dt-1-24-2023
Language-c++
Next Program-Sum of Two Complex Number
--------------------------------------*/
#include<iostream>
using namespace std;
class Complex
{

    private:
        int x,y;
        
    public:
        void read();
        Complex sum(Complex c);
        void display(Complex c); 

};

void Complex::read()
{
    cin>>x>>y;

}

Complex Complex::sum(Complex c)
{

    Complex temp;
    
    temp.x=this->x+c.x;
    temp.y=this->y+c.y;

return temp;
}


void Complex::display(Complex c)
{
    cout<<c.x<<"+i"<<c.y;

}

int main()
{
    Complex c1,c2,sum;
    c1.read();
    c2.read();
    
        sum=c1.sum(c2);
        c1.display(sum);

}