/*Program No-P459.cpp
dt-2-5-2023
Concept-FileHandling
Next Program-Read Biodata from keyboard and Write to a File until Name[0]!=$ using Command Line Argument
-----------------------------------------------------------------------------------------------------------
g++ p459.cpp
./a.out Fileupdate
MONU
47
147
SUN
49
148
$
----------------------------------------------------------------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{

    char name[100];
    int age;
    float salary;
    
        ofstream bio(argv[1]);
        
            if(argc<2)
            {
                
                cout<<"Invalid Argument";
                
            }
            
            if(bio.fail())
            {
                cout<<"File Opening Error";
            
            }
                        
            cin>>name;
            
                while(name[0]!='$')
                {
                
                    cin>>age>>salary;
                    
                        bio<<'\n'<<name<<'\n'<<age<<'\n'<<salary<<'\n';                        
                        
                        cin>>name;
               }

bio.close();

}