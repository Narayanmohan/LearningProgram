/*Program No-P428.cpp
dt-12-30-2022
Concept-DefaultConstructor
Next Program-Area of circle using Default Constructor
-----------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class aoc
{
    private:
    
        int r;
        float result;

    
    public:
        aoc() // Defining Constructor
        {
        
            r=7;
        
        }

        void findaoc();
        void displayaoc();


};

void aoc::findaoc()
{

    result=3.14*r*r;
} 

void aoc::displayaoc()
{
    cout<<result;

}

int main()
{
    aoc ac;
    ac.findaoc();
    ac.displayaoc();

}

