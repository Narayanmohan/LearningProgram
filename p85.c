/*Program No- p85.c
dt 8-14-2021
Concept: ARRAY	
Next Program: Sum of 10 Numbers using an Array 
Notes: a[i] = value of an array
----------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j, sum, a[10];

sum=0;
i=0;
while(i<10)
{

    scanf("%d",&a[i]);
    i++;
}

i=0;
while(i<10)
{
    sum = sum+a[i];
    i++;

}
printf("%d",sum);

}
