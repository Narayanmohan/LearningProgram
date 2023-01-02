/*Program No-P429.cpp
dt-1-1-2023
Concept-Constructor-Default Arguments
Next Program-Biggest of 3 numbers using default constructors
---------------------------------------------------------------------*/
#include<iostream>
using namespace std;

class Big3
{
    private:
        int N1,N2,N3,result;
        
    public:
        Big3()
        {        
            N1=7;
            N2=17;
            N3=197;               
        }

void biggestof3();
void displaybig3();
};


void Big3::biggestof3()
{
    int s;
    s=N1>N2?N1:N2;
    result=s>N3?s:N3;

}

void Big3::displaybig3()
{

    cout<<"Biggest of 3 Number="<<result;    
}

int main()
{
  
    Big3 b3;
    b3.biggestof3();
    b3.displaybig3();
    
}
