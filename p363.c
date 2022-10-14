/*Program No-P363.c
dt-10-13-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and Replace the Pattern
-----------------------------------------------------------------

cc p363.c
./a.out p363.c

I love india$india$USA$

Output->I love USA
----------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void replacePattern(char *pa,char *pb,char *pc, char *pd);
void display(char *pd);
int main()
{
    char a[100];
    char b[100];
    char c[100];
    char d[100];
    
        read(a);
        read(b);
        read(c);
        
        replacePattern(a,b,c,d);

        display(d);

}

void read(char *pa)
{
    
    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';

}

void replacePattern(char *pa,char *pb, char *pc, char *pd)
{

    char *pq;
    char *pr;
    char *ps;
    
    
        for(; *pa!='\0';)
        {
        
            for(pq=pa,pr=pb;*pq==*pr && *pr!='\0';pr++,pq++);
            
            
                if(*pr=='\0')
                {                    
                    
                    for(pa=pq,ps=pc; *ps!='\0';ps++,pd++)
                    {
                        
                        *pd=*ps;
                                                                         
                    
                    }                                                                  
                }               
                else
                {                
                    *pd=*pa;
                     
                     pd++;          
                     pa++;
                }              
        
        }

*pd='\0';

}

void display(char *pd)
{

    for(; *pd!='\0';pd++)
    {
        putchar(*pd);
    
    }

}

