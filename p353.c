/*Program No-P353.c
dt-9-27-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and Reverse the text
------------------------------------------------------------------------*/
#include<stdio.h>

void read(char *pa);
void reverse(char *pa,char *pb);
void display(char *pb);

int len(char *pa);


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



int len(char *pa)
{

    int length;
    
    length=0;
    
        for(pa;*pa!='\0';pa++)
        {
            length=length+1;
        
        }
        
return length;

}

void reverse(char *pa, char *pb)
{

    int length,g;
           
    char *pt;
       
    length =len(pa);
    
    
    g=length-1;
    
    pt=pa;
    
        for(pa=pa+g;pa>=pt;pa--)
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
