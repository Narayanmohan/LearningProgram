/*Program No-P445.cpp
dt-1-19-2023
Language-c++
Next Program-Read a point and increment and Display
------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class point
{

    private:
        int x,y;
        
    public:
        void read();
        void increment();
        void display();
        
};


void point::read()
{

    cin>>x>>y;
}

void point::increment()
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

    point obj;
    obj.read();
    obj.display();

}