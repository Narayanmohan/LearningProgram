/*Program No- p123.c
dt-9-2-2021
Concept: CHAR ARRAY
Next Program: Read Text until '$' is given and count number of lines in the given text 
-----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,lines;
char a[100];


i=0;

scanf("%c",&a[i]);

while(a[i]!='$')
{
i++;

scanf("%c",&a[i]);

} 

a[i]='\0';

lines=0;

while(a[i]!='\0')
{

    if(a[i]=='\n')
    {

    lines= lines+1;
    i++;

    }


}

a[i]!='\0';
printf("%c",lines);


}

 