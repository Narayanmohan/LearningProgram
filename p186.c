/*program No-p186.c
dt-11-10-2021
Concept- Char Array
Loop-For Loop
Next program-Count number of lines in the given text
--------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,lines;

char a[100];

for(i=0;(a[i]=getchar())!='$';i++);


a[i]='\0';


for(i=0;a[i];i++)
{

    if(a[i]=='\n')
    {
    
        lines= lines+1;
    
    }


}

printf("%d",lines);


}
