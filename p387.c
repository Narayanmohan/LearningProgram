/*Program No-P387.c
dt-11-18-2022
Concept-Malloc
Next Program-Read and display text using Function with Malloc
--------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
void read(char *pa);
void display(char *pa,char *temp);

int main()
{
    
    char *pa,*pb,*temp;
    int n;
    
    scanf("%d",&n);
    
    pa=temp=(char *)malloc(n);

    read(pa);
    display(pa,temp);
    
}

void read(char *pa)
{

    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';

}

/*void display(char *pa)
{

    for(; *pa!='\0';pa++)
    {
    
        printf("%c",*pa);    
    }

}*/

void display(char *pa, char *temp)
{

    for(pa=temp;*pa!='\0';pa++)
    {
    
        printf("%c",*pa);
    
    }


}

