/*Program No-p171.c
dt-10-31-2021
Loop-For Loop
Concept-Char Array
Getchar()/Putchar()
Next Program-Read and display a text until '$' is given
---------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i;
char a[100];

for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';


for(i=0;a[i];i++)
{

    putchar(a[i]);

}

}