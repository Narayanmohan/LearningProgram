/*Program No-P456.cpp
dt-2-1-2023
Concept-Operator Overloading
Next Program-Combine sum,diff,product of two complex numbers in a single Program
---------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class combine
{
    private:
    
        int x,y;
        
    public:
    
        void read();
        combine operator +(combine c);
        combine operator -(combine c);
        combine operator *(combine c);
        void display();

};

void combine::read()
{
    cin>>x>>y;
}

combine combine::operator +(combine c)
{

    combine temp;
    
    temp.x=this->x + c.x;
    temp.y=this->y + c.y;
    
return temp;
}

combine combine ::operator -(combine c)
{

    combine temp;
    temp.x=this->x- c.x;
    temp.y=this->y- c.y;

return temp;
}

combine combine ::operator *(combine c)
{

    combine temp;
    
    temp.x=this->x * c.x - this->y * c.y;
    temp.y=this->x * c.y + this->y * c.x;
    
    return temp;
}

void combine::display()
{
    cout<<'\n'<<this->x<<"+i"<<this->y<<'\n';

}

int main()
{

    combine c1,c2,sum,diff,prod;
    
    c1.read();
    c2.read();
        
        sum=c1+c2;
        diff=c1-c2;
        prod=c1*c2;
        
            sum.display();
            diff.display();
            prod.display();

}
