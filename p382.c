/*Program No-P382.c
dt-11-15-2022
Concept-Malloc
Next Program-Merge Two Arrays
-----------------------------------------------------------------------
cc p382.c

./a.out p382.c

MEERA$ARVINDAR$

Output => MEERAARVINDAR
----------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

char *pa,*pb,*pc,*temp,*temp1,*temp2;
int n;

scanf("%d",&n);

pa=temp=(char *)malloc(n);

pb=temp1=(char *)malloc(strlen(pa)+1);

pc=temp2=(char *)malloc(strlen(pb)+1);


    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';

    for(;(*pb=getchar())!='$';pb++);
    
    *pb='\0';
    
    
    for(pa=temp;*pa!='\0';pa++)
    {
        *pc=*pa;
         pc++;
    
    }


    for(pb=temp1;*pb!='\0';pb++)
    {
        *pc=*pb;
         pc++;
    
    }
    
    *pc='\0'; 
    
     for(pc=temp2;*pc!='\0';pc++)
     {
         putchar(*pc);
     
     }   

free(temp);
free(temp1);
free(temp2);

}