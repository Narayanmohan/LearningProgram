/*Program No- p86.c
dt-8-14-2021
Concept: Array
Next Program: Avg of 10 Numbers using an ARRAY
------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int i,sum, a[10];
float avg;
sum=0;
avg=0;

i=0;
while(i<10)
{

    scanf("%d",&a[i]);
    i++;

} 

i=0;
while(i<10)
{
    sum= sum+a[i];
    i++;


}

avg = (sum/i);
printf("%f",avg); 

}