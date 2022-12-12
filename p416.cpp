/*Program No-P416.cpp
dt-12-12-2022
Language-c++
Concept-Binding Data and Function inside typedef with Scope operator.
    or
Concept-Binding Data Members and Function inside the typedef.

Next Program-Read and Display bio-data with Binding Data Members and Function.
----------------------------------------------------------------------------------------------
1 - FIELD = ATTRIBUTE = MEMBER VARIABLES all are same.
2 - Member Function.
----------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
typedef struct biodata
{

    //Member Variables.
    
    char name[100];
    int age;
    float salary;
   
           
        void read();     // Member Function
     
        void display();  // Member Function        

}Bio;

void Bio::read()
{
    
    cin>>name>>age>>salary;    

}

void Bio::display()
{
    cout<<'\n'<<name<<'\n'<<age<<'\n'<<salary<<'\n';
}

int main()
{

    Bio b;
    b.read();
    b.display();
}

