/*program No- p184.c
dt-10-31-2021
Concept- For Loop
Next Program-Read Text and Convert Fortran to Pascal 
-----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int i,j;
char a[100];
char b[100];


for(i=0;(a[i]=getchar())!='$';i++);


a[i]='\0';

for(i=0,j=0;a[i];i++)
{

    if(a[i]=='=')
    {
        b[j] = ':';

        j++;

        b[j]='=';

    }

    else if(a[i]=='\n')
    {

    b[j]=';';

    j++;

    b[j]=a[i];
            
    }
    else
    {
        
       b[j]=a[i];
       j++;
        
   }

}

b[j]='\0';

for(j=0;b[j];j++)
{


    putchar(b[j]);
}

}