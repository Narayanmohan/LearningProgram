/*Program No-P466.cpp
dt-2-12-2023
Concept-FileHandling with Class
Next Program-Read biodata from file and display on screen until eof() using Class
---------------------------------------------------------------------------------------*/
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
            }
            
            if(bio.fail())
            {
            
                cout<<"File Opening Error";
            }

person p;

bio.read((char *)&p,sizeof(p));

    while(bio.eof()==0)
    {    
     
        p.display();
    
    }

bio.close();

}