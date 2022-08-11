/*Program No-p318.c
dt-8-10-2022
Concept-Pointers with CharArray
Next program-Count number of upper,lower,singledigit and special characters until $ is given
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    
    char a[100];
    char *pa;
    
        int uc,lc,sc,sd;
        
        uc=lc=sc=sd=0;
        
        
    pa=a;    
                                                                                                                                                                                                                     
        for(pa=a;(*pa=getchar())!='$';pa++);
        
        pa='\0';
        
        
        for(pa=a;*pa!='\0';pa++)
        {
        
            if(*pa>=65 && *pa<=90)
            {
                
                uc=uc+1;                                  
            
            }
        
            else if(*pa>=97 && *pa<=122)        
            {
            
                lc=lc+1;
            }
            
            else if(*pa>=48 && *pa<=57)
            {
            
                sd=sd+1;
            }
            else
            {
                sc=sc+1;
            }
        
        }
    
    
printf("\nUppercasecount=%d \nLowercasecount=%d \nSingledigitcount=%d \nSpecialcharactercount=%d\n",uc,lc,sd,sc);

}