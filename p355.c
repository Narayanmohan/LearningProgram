/*Program No-P355.c
dt-9-28-2022
Concept-Function-Pointers
Next Program-Read text Until $ is given and Convert Upper to Lower using Function-Pointers
------------------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void convertUppToLow(char *pa, char *pb);
void display(char *pb);

int main()
{

    char a[100];
    char b[100];
    
        read(a);
        convertUppToLow(a,b);
        display(b);

}

void read(char *pa)
{

    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';

}

void convertUppToLow(char *pa, char *pb)
{

    for(; *pa!='\0';pa++,pb++)
    {
    
        if(*pa>=65 && *pa<=90)
        {
        
            *pb=*pa+32;
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
    
    for(;*pb!='\0';pb++)
    {
    
        putchar(*pb);
    
    }  

}


