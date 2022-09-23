/*Program No-P350.c
dt-9-22-2022
Concept-Function-Pointers
Next Program-Copy the First Nth Characters to Another Array using Function Pointers
---------------------------------------------------------------------------------------------
1-cc 350.c
2-./a.out p350.c
I love india$
4

O/p =>I lo
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int num;
void read(char *pa);
void firstNCha(char *pa,char *pb,int num);
void display(char *pb);

int main()
{ 
    char a[100];
    
    char b[100];    
      
    read(a);
    
    scanf("%d",&num);
    
    firstNCha(a,b,num);
    
    display(b);

}

void read(char *pa)
{

    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';

}

void firstNCha(char *pa, char *pb,int num)
{
    char *pt;

    for(pt=pa+num; pa<pt;pa++)
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