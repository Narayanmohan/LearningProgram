/*Program No-P350.c
dt-9-22-2022
Concept-Function-Pointers
Next Program-Copy the First Nth Characters to Another Array using Function Pointers
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int num;
char a[100];
char b[100];
void read(char *pa);
void firstNCha(char *pa,char *pb,int num);
void display(char *pb);

int main()
{

     
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
   

    for(; pa<(a+num);pa++)
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