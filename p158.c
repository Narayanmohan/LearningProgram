/*Program No-p158.c
dt-10-17-2021
Loop Concept-For Loop
Concept-Array in For Loop
Next Program- Read Two 3x3 Matrix and Find the sum of two Matrix 
----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,a[3][3],b[3][3],c[3][3];

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
        scanf("%d",&b[i][j]);
    
    }

}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    
        c[i][j] = a[i][j]+ b[i][j];
        
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