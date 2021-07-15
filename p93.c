/*Program No P93.c
dt- 7/15/2021
Concept: Matrix
Program Name-Find the Mean of given Matrix */

#include<stdio.h>
int main()
{
 int i,j,a[3][3],sum;
 float avg;
 
 i=0;
 while(i<3)
 {
    j=0;
    while(j<3)
    {
         scanf("%d",&a[i][j]);
         j++;   
    
    
    } 
 i++;
  
 
 }
sum=0;
avg =0;
i=0;
while(i<3)
{
    j=0;
    
    while(j<3)
    {
        
        sum= sum+a[i][j];
        j++;
    
    
    }
i++;
}

avg = sum/(i+j);
printf("%f",avg);

}
