/*Program No-p349.c
dt-9-22-2022
Concept-Function-Pointers
Next Program-Read text and copy to another Array
-----------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void copy(char *pa,char *pb);
void display(char *pb);

int main()
{

    char a[100];
    char b[100];
    
    read(a);
    
    copy(a,b);
    
    display(b);  

}

void read(char *pa)
{
    
    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';
    

}

void copy(char *pa,char *pb)
{

    for(; *pa!='\0';pa++)
    {
        
        *pb=*pa;
         
         pb++;    
    
    }

}


void display(char *pb)
{

    for(; *pb!='\0';pb++)
    {
    
        putchar(*pb);
    }

}

