/*program No - P75.c
dt-8-10-2021
Concept- While Looping

Next Program: Mean / Avg of 10 Numbers 
---------------------------------------------------------------*/
#include<stdio.h>
int main()
{
 int ctr,avg,sum,a;
 
 ctr=0;
 avg=0;
 sum=0;
 
 
 while(ctr<10)
 {
 
     scanf("%d",&a);
     
     ctr = ctr +1;
     
     sum = sum +a;
 
 
 
 
 
 }

  avg = (sum/ctr);
  printf("%d",avg); 

 
 
}