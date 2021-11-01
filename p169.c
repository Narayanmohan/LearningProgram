/*program No-p169.c
dt-10-31-2021
Concept-Getchar()/Putchar()
Loop-For Loop
Next Program-Read and Display a sentence until '.' Dot is given
-------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int i;

char a[100];

for(i=0;(a[i]=getchar())!='.';i++);

a[i]='\0';

for(i=0;a[i];i++)
{

 putchar(a[i]);
    
}

}