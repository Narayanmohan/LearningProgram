/*Program No-P424.cpp
dt-12-13-2022
Concept-CLASS
Next Program-Biggest of 3 Numbers using CLASS
----------------------------------------------------------*/
#include<iostream>
using namespace std;

class Big3
{
    private:
    
            int a, b,c,t,Biggestof3;
    
    public:
        
            void read();
            void calculate();
            void b3();      

};

void Big3::read()
{
    cin>>a>>b>>c;
}

void Big3::calculate()
{
    t=a>b?a:b;
    Biggestof3 = t>c?t:c;

}

void Big3::b3()
{

    cout<<'\n'<<"Biggest of 3 is = "<<'\n'<<b3<<'\n';

}


int main()
{
    Big3 b;
        b.read();
        b.calculate();
        b.b3();

}

