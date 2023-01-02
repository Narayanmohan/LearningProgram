/*Program No-P432.cpp
dt-1-2-2023
Concept-Parameterized Constructor
Next Program-Biggest of 3 numbers using parameterized constructor
------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

class Big3
{

    private:    
        int num1,num2,num3,result;
    
    public:
        Big3(int a, int b, int c)
        {        
            num1=a;
            num2=b;
            num3=c;        
        }

void biggestof3();
void displaybig3();
};

void Big3::biggestof3()
{

    int s;
    s=num1>num2?num1:num2;
    result=s>num3?s:num3;
    
}

void Big3::displaybig3()
{

    cout<<result;
}


int main()
{
    Big3 b3(7,17,170);
    b3.biggestof3();
    b3.displaybig3();
    
    
        int x,y,z;
        
            cin>>x>>y>>z;
            
                Big3 b4(x,y,z);
                b4.biggestof3();
                b4.displaybig3();          

}



