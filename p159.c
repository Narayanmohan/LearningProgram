/*Program No- p159.c
dt-10-17-2021
Loop Concept- For Loop
Concept-Array in For Loop
Next program - Read two 3x3 Matrix and find the product of two matrix
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,k,a[3][3],b[3][3],c[3][3];

for (i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    
    }

}
    for(i=0;i<3;i++)
    {
    
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = 0;
            
            for(k=0;k<3;k++)
            {
            c[i][j] = c[i][j]+a[i][k]*b[k][j];
            }
        
        }
    
    }
    
   for(i=0;i<3;i++)
   {
   
       for(j=0;j<3;j++)
       {
       
           printf("%d\t",c[i][j]);
           
       }
   
   printf("\n");
   } 


}

