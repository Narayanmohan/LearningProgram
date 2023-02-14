/*Program No-P465.cpp
dt-2-12-2023
Concept-FileHandling with Class
Next Program-Read biodata from keyboard and write to a file until '$' is given using class
--------------------------------------------------------------------------------------------*/
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
        int read();
};

int person::read()
{

    int flag=0;
    
        cin>>name;
        
            if(name[0]!='$')
            {
                cin>>age>>salary;
                flag=1;            
            }

return flag;
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
 
 
            person p;
    
            while(p.read()==1)
            {
            
                bio.write((char *)&p,sizeof(p));
                
            }
    
bio.close();

}




