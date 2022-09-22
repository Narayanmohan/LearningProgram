/*Program No-p347.c
dt-9-21-2022
Concept-Function Pointers
Next Program - Count upper,lower and single Digit
------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void count(char *pa);

 int uc,lc,sc,sd;
    
int main()
{

    char a[100];
    read(a);
    count(a);
    
    printf("\nUppercasecount=%d \nLowercasecount=%d \nSingledigitcount=%d \nSpecialcharactercount=%d\n",uc,lc,sd,sc);
    
}

void read(char *pa)
{

    for(;(*pa=getchar())!='$';pa++);
    
    *pa!='\0';

}

void count(char *pa)
{

    uc=lc=sc=sd=0;

    for(; *pa!='\0';pa++)
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
    


}