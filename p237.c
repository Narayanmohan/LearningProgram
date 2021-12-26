/*Program No-p237.c
dt-12-25-2021
Concept-FileHandling
NextProgram-Read from file and count number of words, lines and characters line by line
------------------------------------------------------------------------------------------
Note:

When run the program use countofwords.txt as a inputfile.
------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

int i,lineno,cw,cl,cc;

char a[100];
FILE *fp2;

if(argc<2)
{

    printf("File Opening Error");
    return 0;

}
fp2= fopen(argv[1],"r");

if(fp2==NULL)
{
printf("File Opening Error");
return 0;
}

lineno=0;

for(i=0;(a[i]=getc(fp2))!=EOF;i++)
{
    cl=0;
    if(a[i]=='\n')
    {

      cl=cl+1;
        
      a[i]='\0';
        
     cw=0;
     cc=0;
                   
                 
            for(i=0;a[i]!='\0';i++)
            {
    
                        
                     if(a[i]==' ')
                     {
        
                      cw=cw+1;
                     }
              
                    else
                    {
     
                     cc= cc+1;
      
                    }
                   
              
            }
          
       
           printf("Lineno:=%d ,countoflines:=%d, countofwords:=%d, countofcharacters:=%d, %s\n", ++lineno ,cl,cw, cc, a);
           
           i= -1;
   
    
       
   }

}
fclose(fp2);

}






