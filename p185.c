/*Program No-p185.c
dt-11/9/2021
Concept- Char Array
Loop-For Loop
Next Program- Read text until '$' is given and convert  Pascal to Fortran
--------------------------------------------------------------------------------------------*/
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
    if(a[i]==':')
    {
    
        continue;
    
    }
    
    else if(a[i]==';')
    {
        
        continue;
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

