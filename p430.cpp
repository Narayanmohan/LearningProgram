/*Program No-P430.cpp
dt-1-1-2023
Concept-Parameterized Constructor
Next Program-sum of two numbers using parameterized constructor
-------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class sumtwo
{

    private:

        int fN,sN,sum;
        
    public:
        sumtwo(int n1,int n2)
        {
            fN=n1;
            sN=n2;        
        }

void findsum();
void display();
};

void sumtwo::findsum()
{
    sum=fN+sN;

}
void sumtwo::display()
{
    
    cout<<sum;

}

int main()
{
    sumtwo st(7,10);
    
    st.findsum();
    st.display();

    int num1,num2;
    cin>>num1>>num2;
    
        sumtwo st2(num1,num2);
        st2.findsum();
        st2.display();

}