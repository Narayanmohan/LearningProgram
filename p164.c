/*program No- p164.c
dt-10-21-2021
Loop- For Loop
Concept- Array in For Loop
Next Program->Read 3x3 Matrix and Find the sum of the given column in the matrix
------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{


int i,j,sum,col,a[3][3];

for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
    
        scanf("%d",&a[i][j]);
    
    }


}


sum=0;
scanf("%d",&col);

for(i=0;i<3;i++)
{

    sum= sum+a[i][col];

}

printf("%d",sum);

}
