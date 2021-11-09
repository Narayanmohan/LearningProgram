/*program No-p175.c
dt-11-8-2021
Concept-Char Array
Loop- For Loop
Inbuild Method - Putchar()
Next Program-Read text until '$' is given and copy to another array
--------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i;

char a[100];
char b[100];


for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';

for(i=0;a[i];i++)
{

    b[i]=a[i];

}

b[i]='\0';


for(i=0;b[i];i++)
{

    putchar(b[i]);

}


}