/*Program No-P358.c
dt-10-3-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and Store the starting Position of Each Line
----------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void store(char pa,char **pb);
void display(char *pb)
int main()
{
    
    char a[100];
    char *b[100];
    
    read(a);
    store(a,b);
    display(b);

}

void read(char *pa)
{

    for(; (*pa=getchar())!='$';pa++);
    
    *pa='\0';
    
}

void store(char pa, char **pb)
{

    for(; *pa;pa++)
    {
        if(*pa=='\n')
        {
        
            *pb=pa+1;
             pb++;
             
        }
    
    }

*pb=NULL;

}

void display(; *pb!=NULL;pb++)
{
    
    printf("%p \n",*pb);

}



