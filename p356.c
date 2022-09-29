/*Program No-P356.c
dt-9-28-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and Convert Comma to Semicolon
-------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void convertSemi(char *pa, char *pb);
void display(char *pb);
int main()
{
    
            
    char a[100];
    
    char b[100];
    
        read(a);
        convertSemi(a,b);
        display(b);

}

void read(char *pa)
{
    for(; (*pa=getchar())!='$';pa++);
    
    *pa='\0';
    
}

void convertSemi(char *pa,char *pb)
{

    for(; *pa!='\0';pa++,pb++)
    {
    
        if(*pa==',')
        {
        
            *pb=';';
        }
        else
        {
            *pb=*pa;    
        
        }
    
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