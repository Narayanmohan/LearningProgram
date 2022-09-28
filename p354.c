/*Program No-P354.c
dt-9-27-2022
Concept-Function-Pointers
Next Program-Read text until '$' is given and Merge the text
--------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void merge(char *pa, char *pc);
void display(char *pc);
char * len(char *pc);
int main()
{

    char a[100];
    
    char b[100];
    
    char c[100];
    
        read(a);
        read(b);
        merge(a,c);
        merge(b,c);
        display(c);

}

void read(char *pa)
{
    
    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';
        
}

char * len(char *pc)
{
 
  for(pc;*pc!='\0';pc++);
  
  return pc;

}


void merge(char *pa, char *pc)
{
    char *pl;              
        
    for(pc=len(pc);*pa!='\0';pa++)
    {
                       
        *pc=*pa;
         
         pc++;    
    
    } 
    
        
 *pc='\0';    
 
  
}

void display(char *pc)
{

    for(;*pc!='\0';pc++)
    {
    
        putchar(*pc);
        
    }


}




