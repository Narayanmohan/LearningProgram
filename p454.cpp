/*Program No-P454.cpp
dt-2-1-2023
Concept-OperatorOverLoading
Next Program-Difference of two complex numbers using operator Overloading
-------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class diffcomplex
{
    private:

        int x,y;

    public:

        void read();
        diffcomplex operator -(diffcomplex c);
        void display();

};

void diffcomplex::read()
{

   cin>>x>>y;

}

diffcomplex diffcomplex::operator -(diffcomplex c)
{
    
    diffcomplex temp;
    
    temp.x=this->x - c.x;
    temp.y=this->y - c.y;

return temp;

}

void diffcomplex::display()
{

    cout<<this->x<<"+i"<<this->y;

}

int main()
{

    diffcomplex c1,c2,diff;
    c1.read();
    c2.read();
    
        diff=c1-c2;
        diff.display();
        
}
