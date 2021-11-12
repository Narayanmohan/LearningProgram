/*program No-p195.c
dt-11-11-2021
Concept- Do-While
Next Program-Find the number is even or odd between two given limits
-----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,firstlimit,secondlimit;

scanf("%d",&firstlimit);
scanf("%d",&secondlimit);

i=firstlimit;


do
{

    if(i%2==0)
    {
        printf("\n Even Number=%d",i);
    }
    else
    {
    
        printf("\n Odd Number=%d",i);
    }
i++;

}

while(i<=secondlimit);

}
