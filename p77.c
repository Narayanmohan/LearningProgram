/*Program No- p77.c
dt-8-10-2021
Concept: While Looping
Next Program: Smallest of 10 numbers 
--------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int ctr, c, a;

ctr=0;

c=9999;


while(ctr<10)
{

scanf("%d",&a);

if(c>a)
{
    c=a;

}

ctr = ctr +1;

}

printf("%d",a);


}


