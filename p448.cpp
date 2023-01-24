/*Program No-P448.cpp
dt-1-24-2023
Language-c++
Next Program-Read and Display Complex Number
--------------------------------------------------*/
#include<iostream>
using namespace std;
class complex
{
    private:
        int a;
        int b;
    public:
        void read();
        void display();

};


void complex::read()
{

    cin>>a>>b;
}

void complex::display()
{

    cout<<a;
    cout<<"i"<<b;

}
int main()
{

    complex c;
    c.read();
    c.display();


}