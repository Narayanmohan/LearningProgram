/*Program No-p467.cpp
dt-2-12-2023
Concept-FileHandling with Class
Next Program-Read from file and Display the Nth Record
----------------------------------------------------------------------------*/
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
    
    ofstream bio(argv[1]);
    
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


}