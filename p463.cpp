/*Program No-P463.cpp
dt-2-12-2023
Concept-FileHandling with Class
Next Program-Read biodata from keyboard and write it to file using class
---------------------------------------------------------------------------------*/
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
        void read();       

};

void person::read()
{

    cin>>name>>age>>salary;

}

int main(int argc, char *argv[])
{

    ofstream bio(argv[1]);
    
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
       //object created using person class    
        person p;
        
        p.read();
        
        bio.write((char *)&p,sizeof(p));
        
        bio.close();
   
}