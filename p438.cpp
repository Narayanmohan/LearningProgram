/*Program No-P438.cpp
dt-1-5-2023
Concept -Biggest of 3 Number without constructor before Starting Inheritance
Next Program-Biggest of 3 Number without Constructor
--------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Big3
{

    private:
    
        int n1,n2,n3,result;
        
    public:
    
        void read();
        void Biggestof3();
        void displaybig3();

};

void Big3::read()
{
    cin>>n1>>n2>>n3;
}

void Big3::biggestof3()
{
    int s;
    s=n1>n2?n1:n2;
    result =s>n3?s:n3;

}

void Big3::displaybig3()
{
    cout<<"Biggest of 3 Numbers="<<result;

}

int main()
{

    Big3 obj;
    obj.read();
    obj.biggestof3();
    obj.displaybig3();


}