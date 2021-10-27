/*Program No-p178.c
dt-10-26-2021
Concept-For Loop
Next program-Read text until '$' is given and copy the last 'n' characters
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,ctr,j,num;
char a[100];
char b[100];


for(i=0;(a[i]= getchar())!='$';i++);



a[i] ='\0';
ctr =0;

for(i=0;a[i];i++)
{

    ctr = ctr+1;
    
}


scanf("%d",&num);

for(i=num,j=0; i<=ctr; i++,j++)
{

    b[j] = a[i];
    
}



b[j] ='\0';

for(j=0;b[j];j++)
{
    
    putchar(b[j]);

}

}