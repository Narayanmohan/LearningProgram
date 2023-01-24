/*Program No-P447.cpp
dt-1-24-2023
Concept-OperatorOverloading
Next Program-Read a point, decrement and display using operator Overloading
---------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class point
{
    private:
        int x,y;
    public:
        void read();
        void operator --();
        void display();

};

void point::read()
{
    cin>>x>>y;
    
}
void point::operator --()
{
    x--;
    y--;

}

void point::display()
{
    cout<<x<<y;
}

int main()
{
    point p;
    p.read();
    --p;
    p.display();


}