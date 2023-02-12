/*Program No-P462.cpp
dt-2-12-2023
Concept-FileHandling
Next Program-Read character from File and Display on screen until eof()
--------------------------------------------------------------------------------------*/
#include<fstream>
#include<iostream>
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

                while((ch!=eof)
                {

                    fch.get(ch);                   
                
                }

fch.close();
}