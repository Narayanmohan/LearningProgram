
/*program No-p236.c
dt-12-23-2021
Concept-File Handling
Next Program- Read from file line by line and count number of upper, lower, single digit and special characters until EOF
------------------------------------------------------------------------------------------------------------------------------
Example:

we must use the Existing FileName->arvindar.txt for this program
arvindar.txt file has the following text as described below:


Apple$
bAll#
car123


OUTPUT:
=======
Line 1: uc-1, lc-4,sd-0,splcharacter-1
line 2: uc-3, lc-1,sd-0,splcharacter-1
line 3: uc-0, lc-3,sd-3,splcharacter-0
------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

    int i, lineno,uc,lc,sc,sd;
    
    lineno =0;
    
    char a[100];
    
    FILE *fp2;
     
 
    if(argc <2)
    {
        printf("File Opening Error");

        return 0;
    
    }

 fp2 = fopen(argv[1],"r");
 
     
     if(fp2==NULL)
     {
         printf("File Opening Error");
        
         return 0;
     
     }
 
lineno=0;

   for(i=0;(a[i]=getc(fp2))!=EOF;i++)

   {
           
         if(a[i]=='\n')
           {

                 a[i] = '\0';
          
                    
                uc=0;
                lc=0;
                sd=0;
                sc=0;

               for(i=0;a[i]!='\0';i++)
               {



                      if(a[i]>=65 && a[i]<=90)
                      {
                        uc=uc+1;
                      }

                      else if(a[i]>=97 && a[i]<=122)
                       {
                          lc= lc+1;
                       }

                      else if(a[i]>=48 && a[i]<=57)
                      {
                         sd = sd+1;

                      }
                      else
                      {
                        sc = sc+1;
                      }

                } 
               
                printf("lineno:=%d Uppercasecount:=%d lowercasecount%d SingleDigitcount:=%d specialcharactercount:=%d,%s\n",++lineno,uc,lc,sd,sc,a);
           
               i =-1;
                
            }  
                        
                     
          }

        fclose(fp2);

}






