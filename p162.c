/*Program No-p162.c
dt-10-19-2021
Loop Concept- For Loop
Concept-Array in For Loop
Next Program-Read 3x3 Matrix and Find the Mean of given Matrix
-----------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,a[3][3],sum;

float avg;


    for(i=0;i<3;i++)
    {
    
        for(j=0;j<3;j++)
        {
        
            scanf("%d",&a[i][j]);
        
        }
    
    
    
    }

 sum=0;
 avg=0;

 for(i=0;i<3;i++)
 {
 
    for(j=0;j<3;j++)
    {
    
        sum= sum+a[i][j];
        
    } 
 
 
 }

avg = (sum /(i*j));

printf("%f",avg);


}
