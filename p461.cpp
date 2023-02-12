/*Program No-P461.cpp
dt-2-12-2023
Concept-FileHandling
Next Program-Read Character from keyboard until $ is given and write to a File
--------------------------------------------------------------------------------------*/
#include<fstream>
#include<iostream>
int main(int argc, char *argv[])
{

    char ch;
    
    ofstream fch(argv[1]);
        
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
          
          
              while((ch=getchar()!='$')
              {
              
                  fch.put(ch);
              }
          

fch.close();

