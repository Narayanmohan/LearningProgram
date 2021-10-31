/*program No-p168.c
dt-10-31-2021
Loop Concept- For Loop
Array-: Char Array
Function-: GETCHAR() / PUTCHAR

Getchar()->This function is used to read single character.
Putchar()->This function is used to print single character.


Explanation:
a[i] = getchar()--> This will read new char & assign to a[i].

a[i]= getchar()!=' ' -->This will check wheather a[i]!=' '  or NOT

In the second loop for(i=0;a[i];i++)  here a[i] will check a[i]!='\0' implicitly. 
---------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i;
char a[100];

for(i=0;(a[i]=getchar())!=' '; i++);

a[i]='\0';

    for(i=0;a[i];i++)
    {

        putchar(a[i]);

     }


}
