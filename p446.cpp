/*Program No-P446.cpp
dt-1-24-2023
Concept-Operator OverLoading
Next Program-Read a point,increment and display using operator overloading
-------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class point
{

    private:
    
        int x,y;
        
    public:
        void read();
        void operator ++();
        void display();    

};

void point::read()
{
    cin>>x>>y;
}

void point::operator ++()
{

    x++;
    y++;

}

void point::display()
{
    cout<<x<<y;

}

int main()
{

    point p;
    p.read();
    ++p; 
    p.display();
    
}