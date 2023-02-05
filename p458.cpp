/*Program No-P458.cpp
dt-2-5-2023
Concept-FileHandling
Next Program-Read Biodata from File and Display on Screen
-------------------------------------------------------------------*/
#include<fstream>
#include<iostream>
int main()
{

    char name[100];
    int age;
    float salary;
}

    ifstream bio(argv[1])
    {
    
        if(argc<2)
        {
        
            cout<<"Invalid Argument";
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