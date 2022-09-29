/*Program No-P357.c
dt-9-28-2022
Concept-FunctionPointers
Next Program-Read text until $ is given and Delete Comma
----------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void deleteComma(char *pa, char *pb);
void display(char *pb);

int main()
{
    char a[100];
    char b[100];
    
        read(a);
        deleteComma(a,b);
        display(b);

}

void read(char *pa)
{

    for(; (*pa=getchar())!='$';pa++);
    
    *pa='\0';


}

void deleteComma(char *pa, char *pb)
{

    for(;*pa!='\0';)
    {
    
        if(*pa==',')
        {
          pa++;         
            
        }
        else
        {
             	
            *pb=*pa;
            pa++;
            pb++;
            
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
