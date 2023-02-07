/*Program No-P460.cpp
dt-2-7-2023
Concept-FileHandling with Command Line Argument
Next Program- Read biodata from file and display on screen until bio.eof()==0
--------------------------------------------------------------------------------*/
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
       cout<<"invalid Argument";        
       return 0;
    }
    
    if(bio.fail())
    {    
       cout<<"File Opening Error";
       return 0;

    }


    bio>>name>>age>>salary;
    
        while(bio.eof()==0)
        {
            cout<<name<<age<<salary;
        }
   
bio.close();

}
  
