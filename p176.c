/*Program No-p176.c
dt-11-9-2021
Concept-Char Array
Loop-For Loop
Next Program-Read text until '$' is given and copy First ' N ' characters to another Array
------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,num;

char a[100];
char b[100];

for(i=0;(a[i]=getchar())!='$';i++);



a[i]='\0';

scanf("%d",&num);

for(i=0;i<num;i++)
{

    b[i] = a[i];

}


b[i]='\0';

for(i=0;b[i];i++)
{
putchar(b[i]);

}

}
