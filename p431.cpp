/*Program No-P431.cpp
dt-1-1-2023
Concept-Parameterized Constructor
Next Program-Area of circle using parameterized constructor
---------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Aoc
{
    
    private:
        
          int r;
          float result;                      
    
    public:
    
         Aoc(int n) // int a is the local variable  and Aoc =>Defining Constructor
         {
             
             r=n;
         
         }  

void findaoc();
void displayaoc();                        
            
};

void Aoc::findaoc()
{
    result=3.14*r*r;

}

void Aoc::displayaoc()
{
    cout<<result;

}


int main()
{


    Aoc ac(7);
    ac.findaoc();
    ac.displayaoc();


int num;

cin>>num;

Aoc ac2(num);
ac2.findaoc();
ac2.displayaoc();

}




