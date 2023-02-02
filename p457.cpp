/*Program No-P457.cpp
dt-2-1-2023
concept-FileHandling concept on c++
Next Program-Read biodata from keyboard and write to a file
-----------------------------------------------------------------
./a.out plus

anand
27
147000
-----------------------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
int main(int argc,char* argv[])
{
    
    
    char name[100];
    int age;
    float salary;


//Output file stream

ofstream bio(argv[1]);

    if(argc<2)
    {
        cout<<"Invalid Argument";
    
    }    


    if(bio.fail())
    {
        cout<<"File Opening Error";
    
    }

    cin>>name>>age>>salary;
    bio<<name<<age<<salary;
    bio.close();    

}