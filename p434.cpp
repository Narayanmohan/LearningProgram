/*Program No-P434.cpp
dt-1-2-2023
Concept-Constructor OverLoading
Next Program-Area of Circle using Constructor OverLoading
------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class aoc
{

    private:
        int r;
        float result;

    public:
        aoc() // Defining constructor here...
        {
            r=7;     
        
        }
        aoc(int num)
        {
        
            r=num;
        
        }
void findaoc();
void display();
};


void aoc::findaoc()
{
    result=3.14 * r  * r;

} 

void aoc::display()
{
    cout<<result;

} 

int main()
{

    aoc ac;
    ac.findaoc();
    ac.display();
    
    
        int x;
        cin>>x;
        
        aoc ac2(x);
        ac2.findaoc();
        ac2.display();    
    
} 