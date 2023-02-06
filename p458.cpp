/*Program No-P458.cpp
dt-2-5-2023
Concept-FileHandling
Next Program-Read Biodata from File and Display on Screen
--------------------------------------------------------------------
g++ p458.cpp

./a.out plus
-------------------------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{

    char name[100];
    int age;
    float salary;


    ifstream bio(argv[1]);
    
    
    
        if(argc<2)
        {
        
            cout<<"Invalid Argument";
            return 0;
        }
        
        
        if(bio.fail())
        {
        
            cout<<"File Opening Error";
            return 0;
        
        }
        
       
        bio>>name>>age>>salary;
        cout<<name<<age<<salary;
       
           bio.close(); 
}