/* Program No- p74.c
dt-8-10-2021
Concept: While Looping
Next Program: Sum of 10 Numbers 
-------------------------------------------------------*/
#include<stdio.h>
int main()
{

int sum,ctr,a;

sum=0;
ctr=0;

while(ctr<10)
{


    scanf("%d",&a);
    
    sum = sum + a;
    
    ctr= ctr +1;
    
    



}

printf("%d",sum);



}
