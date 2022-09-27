/*Program No-P353.c
dt-9-27-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and Reverse the text
------------------------------------------------------------------------*/
#include<stdio.h>

void read(char *pa);
void reverse(char *pa,char *pb);
void display(char *pb);

char *len(char *pa);


int main()
{

    char a[100];
    
    char b[100];
    
        read(a);
        
        reverse(a,b);
        
        display(b);

}


void read(char *pa)
{

    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';

}

char *len(char *pa)
{

  for(pa; *pa!='\0'; pa++);
  
  return pa;

}



void reverse(char *pa, char *pb)
{

               
    char *pt;
    
    char *pl;  
    
    pt=pa;
       
    pl=len(pa);
        
    pa=pl-1;
    
       
        for(pa;pa>=pt;pa--)
        {
        
            *pb=*pa;
             pb++;
        
        }

*pb='\0';

}

void display(char *pb)
{

    for(; *pb!='\0';pb++)
    {        
    
        putchar(*pb);
    
    }

}
