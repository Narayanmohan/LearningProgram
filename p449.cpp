/*Program No-P449.cpp
dt-1-24-2023
Language-c++
Next Program-Read and display two complex Number
-----------------------------------------------------------------*/
#include<iostream>
using namespace std;
class complex
{
    private:
        
        int x,y;
        
    public:
        
        void read();
        void display();

};

void complex::read()
{
    cin>>x>>y;
}

void complex::display()
{

    cout<<x<<"i"<<y;    
}

int main()
{

    complex c;
    c.read();
    c.display();
    
    complex c1;
    c1.read();
    c1.display();
  

}    
    