/*Program No-p179.c
dt-11-9-2021
Concept-Char Array
Loop-For Loop
Next Program-Read text until '$' is given and Convert upper case to lower case
--------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j;
char a[100];
char b[100];


for(i=0;(a[i]=getchar())!='$';i++);


a[i]='\0';

for(i=0,j=0;a[i];i++,j++)
{

    if(a[i]>=65 && a[i]<=90)
    {
        
        b[j] = a[i]+32;
    }
    else
    {
    
    b[j] = a[i];
    
    }

}

b[j]='\0';

for(j=0;b[j];j++)
{

    putchar(b[j]);

} 

}