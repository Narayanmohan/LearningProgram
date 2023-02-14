/*Program No-P462.cpp
dt-2-12-2023
Concept-FileHandling
Next Program-Read character from File and Display on screen until eof()
---------------------------------------------------------------------------------------
./a.out writetofile
--------------------------------------------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    char ch;
    
    
        ifstream fch(argv[1]);
        
            if(argc<2)
            {
                cout<<"invalid Argument";
                return 0;
            }
            
            if(fch.fail())
            {            
                cout<<"File Opening Error";
                return 0;                
            }

            fch.get(ch);
            
            while(fch.eof()==0)
                {
                    cout<<ch;
                    fch.get(ch);                                                    
                }
fch.close();
}