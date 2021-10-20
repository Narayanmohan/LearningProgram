/*Program No-p161.c
dt-10-19-2021
Loop concept-For Loop
Concept - Array in For Loop
Next Program-Read 3x3 Matrix and find the sum of given matrix
-----------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,a[3][3],sum;

    for(i=0;i<3;i++)
    {

         for(j=0;j<3;j++)
         {
         
            scanf("%d",&a[i][j]); 
         
        }

    }

sum=0;

    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
        
            sum= sum+a[i][j];
        }

    }


printf("%d",sum);

}
