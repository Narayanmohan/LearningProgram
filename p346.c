/*Program No-p346.c
dt-9-21-2022
Concept-Function Pointers
Next Program-Read and Display a text until $ is given
---------------------------------------------------------------------*/
#include<stdio.h>

void read(char *pa);

void display(char *pa);

int main()
{

    char a[100];
    
    read(a);
    
    display(a);
    

}


void read(char *pa)
{

    for(;(*pa=getchar())!='$';pa++);
    
    *pa!='\0';       

}

void display(char *pa)
{

    for(; *pa!='\0';pa++)
    {
    
        printf("%c",*pa);
    }


}