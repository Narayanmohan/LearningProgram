/*Program No-P362.c
dt-10-12-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and Delete the pattern
------------------------------------------------------------------------------
Note:

cc p362.c
./a.out p362.c
I Love INDIA$LOVE$

OUTPUT SHOULD BE=>I INDIA
------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void deletePattern(char *pa,char *pb, char *pc);
void display(char *pc);

int main()
{

    char a[100];
    char b[100];
    char c[100];


        read(a);
        
        read(b);
        
        deletePattern(a,b,c);
        
        display(c);

}

void read(char *pa)
{
    
    for(; (*pa=getchar())!='$';pa++);
    
    *pa='\0';

}
void deletePattern(char *pa, char *pb,char *pc)
{

    char *pq;
    
    char *pr;
    
    for(;*pa!='\0';pa++)
    {

        for(pq=pa,pr=pb;*pq==*pr && *pr!='\0';pr++,pq++);
        

            if(*pr=='\0')
            {
            
                pa=pq;
            }

            else
            {
            
                *pc=*pa;
                 pc++;
                             
            }    

  }
*pc='\0';

} 

void display(char *pc)
{

    for(; *pc!='\0';pc++)
    {
    
        putchar(*pc);
    }

}