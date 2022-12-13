/*Program No-P421.cpp
dt-12-12-2022
Concept-PRIVATE ACCESS MODIFIERS
concept-Typedef
Next Program-Biggest of 3 Numbers using c++
-------------------------------------------------------------------
1-public member function in the typedef can access private member variable when both has the same Datatype[big3] keyword.

2-Main function can only access public functions structure/ class.

-------------------------------------------------------------------*/
#include<iostream>
using namespace std;

typedef struct bigof3num
{
        private:
        
            int a, b, c,t, biggest3;
    
        public:
           
            void read();
            void calculate();
            void big3display();          

}big3;

void big3::read()
{

    cin>>a>>b>>c;
    
}

void big3::calculate()
{
    
    t=a>b?a:b;
    biggest3 = t>c?t:c;

}

void big3::big3display()
{
    cout<<'\n'<<"Biggest of 3 is ="<<biggest3<<'\n';

}

int main()
{

    big3 b;
    
    b.read();
    b.calculate();
    b.big3display();

}