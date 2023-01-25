/*Program No-P452.cpp
dt-1-24-2023
Language-c++
Next Program-Product of Two Complex Numbers
-------------------------------------------------------------*/
#include<iostream>
using namespace std;
class prodcomplex
{
    private:
    
        int x,y;
    
    public:
        void read();
        prodcomplex prod(prodcomplex c);
        void display(prodcomplex c);

};

void prodcomplex::read()
{
 
    cin>>x>>y;
}

prodcomplex prodcomplex::prod(prodcomplex c)
{

    prodcomplex temp;
    
    temp.x=this->x * c.x - this->y *c.y;
    temp.y=this->x + c.y + this->y *c.x;
    
return temp;

}
void prodcomplex::display(prodcomplex c)
{

    cout<<c.x<<"+i"<<c.y;

}


int main()
{

    prodcomplex c1,c2,prod;
    c1.read();
    c2.read();
    
    prod=c1.prod(c2);
    c1.display(prod);

}