/*Program No-P464.cpp
dt-2-12-2023
Concept-File Handling with Class
Next Program-Read biodata from file and display on screen using class
------------------------------------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
class person
{
    private:
        char name[100];
        int age;
        float salary;

    public:
        void display();
 
};

void person::display()
{
    cout<<name<<age<<salary;
}


int main(int argc, char *argv[])
{

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
        

person p;

bio.read((char *)&p,sizeof(p));

p.display();

bio.close(); 
   
}


