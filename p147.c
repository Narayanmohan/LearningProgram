/*program No p147.c
dt-10-16-2021
Loop Concept- For Loop
Concept - Array in For Loop
Next Program-Read 10 numbers and Find the sum of 10 numbers in the given array 
--------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
 
 int i,sum,a[10];
 i=0;
 sum=0;
 
 
 for(i=0;i<10;i++)
 {
 
     scanf("%d",&a[i]);
 
 
 }

for(i=0;i<10;i++)
{

sum= sum+ a[i];

}

printf("%d",sum);


}