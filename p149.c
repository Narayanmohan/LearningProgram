/*Program No- p149.c
dt-10-16-2021
Loop Concept- For Loop
Array In For Loop
Next Program - Read 10 numbers and find the biggest of 10 numbers in the given array
---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,a[10],c;

c=a[0];

    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {

        if(c<a[i])
        {
           c=a[i];
        }
    
    }

printf("Biggest of 10 is = %d",c);

}